//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGiPhotoEffectsOperation : DGOperation
{
    NSNumber *_blackAndWhiteIntensity;
    NSNumber *_sepiaIntensity;
    NSNumber *_antiqueIntensity;
    NSNumber *_matteIntensity;
    NSNumber *_vignetteIntensity;
    NSNumber *_edgeBlurIntensity;
    NSNumber *_fadeIntensity;
    NSNumber *_boostIntensity;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputBoostIntensity; // @synthesize inputBoostIntensity=_boostIntensity;
@property(copy, nonatomic) NSNumber *inputFadeIntensity; // @synthesize inputFadeIntensity=_fadeIntensity;
@property(copy, nonatomic) NSNumber *inputEdgeBlurIntensity; // @synthesize inputEdgeBlurIntensity=_edgeBlurIntensity;
@property(copy, nonatomic) NSNumber *inputVignetteIntensity; // @synthesize inputVignetteIntensity=_vignetteIntensity;
@property(copy, nonatomic) NSNumber *inputMatteIntensity; // @synthesize inputMatteIntensity=_matteIntensity;
@property(copy, nonatomic) NSNumber *inputAntiqueIntensity; // @synthesize inputAntiqueIntensity=_antiqueIntensity;
@property(copy, nonatomic) NSNumber *inputSepiaIntensity; // @synthesize inputSepiaIntensity=_sepiaIntensity;
@property(copy, nonatomic) NSNumber *inputBlackAndWhiteIntensity; // @synthesize inputBlackAndWhiteIntensity=_blackAndWhiteIntensity;
- (void).cxx_destruct;
- (BOOL)isPostGeometryOperation;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)_filter;
@property(nonatomic) NSNumber *inputEffectType;

@end
