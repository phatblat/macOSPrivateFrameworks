//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface TCXmlStreamWriter : NSObject
{
    struct _xmlTextWriter *mStreamAPI;
    unsigned int mCurrentDepth;
    BOOL mContentAdded;
    NSMutableSet *mAddedIds;
}

+ (BOOL)cleanUpXmlTextWriter:(struct _xmlTextWriter *)arg1;
+ (struct _xmlTextWriter *)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer *)arg1;
+ (struct _xmlTextWriter *)createXmlTextWriterAtEntry:(id)arg1 inOutputStream:(id)arg2 isCompressed:(BOOL)arg3;
+ (struct _xmlTextWriter *)createXmlTextWriterWithContext:(id)arg1;
+ (BOOL)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (BOOL)writeDtdToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;
+ (BOOL)writeNamespaceToStream:(struct _xmlTextWriter *)arg1 prefix:(id)arg2 uri:(const char *)arg3;
+ (BOOL)writeAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
+ (BOOL)writePlainAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3;
+ (BOOL)writeStringToStream:(struct _xmlTextWriter *)arg1 text:(id)arg2;
+ (BOOL)endElementInStream:(struct _xmlTextWriter *)arg1;
+ (BOOL)startElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
+ (BOOL)startPlainElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;
+ (void)resetElementIds;
- (BOOL)writeAnchorTarget:(id)arg1;
- (BOOL)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;
- (BOOL)writeNamespace:(id)arg1 uri:(const char *)arg2;
- (BOOL)writeElementId:(id)arg1;
- (BOOL)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;
- (BOOL)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;
- (BOOL)writePlainAttribute:(id)arg1 boolContent:(BOOL)arg2;
- (BOOL)writePlainAttribute:(id)arg1 intContent:(long long)arg2;
- (BOOL)writePlainAttribute:(id)arg1 content:(id)arg2;
- (BOOL)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;
- (BOOL)writeAttribute:(id)arg1 boolContent:(BOOL)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;
- (BOOL)endElementsToBase;
- (BOOL)writeString:(id)arg1;
- (BOOL)endElement;
- (BOOL)startPlainElement:(id)arg1;
- (BOOL)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;
- (BOOL)contentAdded;
- (struct _xmlTextWriter *)textWriter;
- (void)dealloc;
- (id)initWithTextWriter:(struct _xmlTextWriter *)arg1;

@end

