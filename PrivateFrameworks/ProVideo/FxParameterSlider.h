//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter
{
    struct FxParameterSliderPriv *_sliderPriv;
}

- (void)setIsLogarithmic:(BOOL)arg1;
- (BOOL)isLogarithmic;
- (void)setMaxSliderValue:(double)arg1;
- (double)maxSliderValue;
- (void)setMinSliderValue:(double)arg1;
- (double)minSliderValue;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)dealloc;
- (id)init;

@end

