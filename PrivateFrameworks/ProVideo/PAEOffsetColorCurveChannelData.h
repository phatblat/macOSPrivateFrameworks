//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FxCustomParameterInterpolation.h"
#import "NSCoding.h"
#import "NSCopying.h"

@interface PAEOffsetColorCurveChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation>
{
    void *_curve_private;
}

+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t_d4b9b3c6 *)arg4;
+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (BOOL)isEqualTo:(id)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)conformFromColorCurve:(id)arg1;
- (double)evaluate:(double)arg1;
- (void)reset;
- (BOOL)isAtDefaults;
- (double)blue;
- (double)green;
- (double)red;
- (offsetcolor_t_d4b9b3c6 *)curveRef;
- (void)dealloc;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const offsetcolor_t_d4b9b3c6 *)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)init;

@end
