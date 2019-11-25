//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/IPAOperation.h>

#import "DGAutoCalculable.h"

@class NSString;

@interface IPASmartBlackAndWhiteOperation : IPAOperation <DGAutoCalculable>
{
    double _inputBlackAndWhite;
    double _offsetStrength;
    double _offsetNeutralGamma;
    double _offsetTone;
    double _offsetHue;
    double _offsetGrain;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
@property(nonatomic) double offsetGrain; // @synthesize offsetGrain=_offsetGrain;
@property(nonatomic) double offsetHue; // @synthesize offsetHue=_offsetHue;
@property(nonatomic) double offsetTone; // @synthesize offsetTone=_offsetTone;
@property(nonatomic) double offsetNeutralGamma; // @synthesize offsetNeutralGamma=_offsetNeutralGamma;
@property(nonatomic) double offsetStrength; // @synthesize offsetStrength=_offsetStrength;
@property(nonatomic) double inputBlackAndWhite; // @synthesize inputBlackAndWhite=_inputBlackAndWhite;
- (void)_applyAutoSettings:(id)arg1;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (void)setNilValueForKey:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

