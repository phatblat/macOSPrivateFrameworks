//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OAXShape3D : NSObject
{
}

+ (BOOL)isEmpty:(id)arg1;
+ (void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2;
+ (void)writeShape3D:(id)arg1 to:(id)arg2;
+ (void)writeBevel:(id)arg1 to:(id)arg2;
+ (id)readShape3DFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)readBevelFromXmlNode:(struct _xmlNode *)arg1;
+ (id)materialEnumMap;
+ (id)bevelTypeEnumMap;

@end

