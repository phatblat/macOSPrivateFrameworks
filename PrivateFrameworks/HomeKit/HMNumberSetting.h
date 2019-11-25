//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMSetting.h>

@class NSNumber;

@interface HMNumberSetting : HMSetting
{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
}

@property(readonly) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
- (void).cxx_destruct;
- (id)valueForUpdate:(id)arg1;
- (id)internalValue;
- (BOOL)isKindOfClass:(Class)arg1;

@end

