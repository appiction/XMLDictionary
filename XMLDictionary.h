//
//  XMLDictionary.h
//
//  Version 1.0
//
//  Created by Nick Lockwood on 15/11/2010.
//  Copyright 2010 Charcoal Design. All rights reserved.
//
//  Get the latest version of XMLDictionary from either of these locations:
//
//  http://charcoaldesign.co.uk/source/cocoa#xmldictionary
//  https://github.com/demosthenese/xmldictionary
//
//  This software is provided 'as-is', without any express or implied
//  warranty.  In no event will the authors be held liable for any damages
//  arising from the use of this software.
//
//  Permission is granted to anyone to use this software for any purpose,
//  including commercial applications, and to alter it and redistribute it
//  freely, subject to the following restrictions:
//
//  1. The origin of this software must not be misrepresented; you must not
//  claim that you wrote the original software. If you use this software
//  in a product, an acknowledgment in the product documentation would be
//  appreciated but is not required.
//
//  2. Altered source versions must be plainly marked as such, and must not be
//  misrepresented as being the original software.
//
//  3. This notice may not be removed or altered from any source distribution.
//

#import <Foundation/Foundation.h>


#ifndef COLLAPSE_TEXT_NODES
#define COLLAPSE_TEXT_NODES		YES
#endif
#ifndef TRIM_WHITE_SPACE
#define TRIM_WHITE_SPACE		YES
#endif

#ifndef XML_ATTRIBUTES_KEY
#define XML_ATTRIBUTES_KEY		@"__attributes"
#endif
#ifndef XML_COMMENTS_KEY
#define XML_COMMENTS_KEY		@"__comments"
#endif
#ifndef XML_TEXT_KEY
#define XML_TEXT_KEY			@"__text"
#endif
#ifndef XML_NAME_KEY
#define XML_NAME_KEY			@"__name"
#endif

#ifndef XML_ATTRIBUTE_PREFIX
#define XML_ATTRIBUTE_PREFIX	@"_"
#endif

@interface NSDictionary (XMLDictionary)

+ (NSDictionary *)dictionaryWithXMLData:(NSData *)data;
+ (NSDictionary *)dictionaryWithXMLString:(NSString *)string;
+ (NSDictionary *)dictionaryWithXMLFile:(NSString *)path;

- (NSString *)attributeForKey:(NSString *)key;
- (NSDictionary *)attributes;
- (NSDictionary *)childNodes;
- (NSArray *)comments;
- (NSString *)nodeName;
- (NSString *)innerText;
- (NSString *)innerXML;
- (NSString *)xmlString;

@end


@interface NSString (XMLDictionary)

- (NSString *)xmlEncodedString;

@end

