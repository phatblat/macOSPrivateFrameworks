//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/FxPinParameter.h>

@interface FxParameterAngle : FxPinParameter
{
    struct FxParameterAnglePriv *_anglePriv;
}

- (void)setIsClockwise:(BOOL)arg1;
- (BOOL)isClockwise;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (void)setStartValue:(double)arg1;
- (double)startValue;
- (void)dealloc;
- (id)init;

@end

