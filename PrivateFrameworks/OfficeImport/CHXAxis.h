//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject
{
}

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdCrossesFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(struct _xmlNode *)arg1;
+ (int)chdTickMarkFromXmlTickMarkElement:(struct _xmlNode *)arg1;
+ (int)chdAxisPositionFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readScalingFromXmlScalingElement:(struct _xmlNode *)arg1 axis:(id)arg2 state:(id)arg3;
+ (Class)chxAxisClassWithChdAxis:(id)arg1;
+ (Class)chxAxisClassWithXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end

