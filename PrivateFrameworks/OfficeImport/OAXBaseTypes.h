//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject
{
}

+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;
+ (id)stringForRectAlignment:(int)arg1;
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;
+ (id)rectAlignmentEnumMap;

@end

