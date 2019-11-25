//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMaterial/MTTintingMaterialSettings.h>

#import "MTMaterialFiltering.h"

@class NSArray, NSString;

@interface MTTintingFilteringMaterialSettings : MTTintingMaterialSettings <MTMaterialFiltering>
{
    BOOL _averageColorEnabled;
    BOOL _blurAtEnd;
    double _luminanceAmount;
    NSArray *_luminanceValues;
    double _blurRadius;
    double _saturation;
    double _brightness;
    double _zoom;
    double _backdropScale;
    NSString *_blurInputQuality;
    struct CAColorMatrix _colorMatrix;
}

@property(readonly, nonatomic, getter=isBlurAtEnd) BOOL blurAtEnd; // @synthesize blurAtEnd=_blurAtEnd;
@property(readonly, copy, nonatomic) NSString *blurInputQuality; // @synthesize blurInputQuality=_blurInputQuality;
@property(readonly, nonatomic) double backdropScale; // @synthesize backdropScale=_backdropScale;
@property(readonly, nonatomic) double zoom; // @synthesize zoom=_zoom;
@property(readonly, nonatomic) struct CAColorMatrix colorMatrix; // @synthesize colorMatrix=_colorMatrix;
@property(readonly, nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(readonly, nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(readonly, nonatomic, getter=isAverageColorEnabled) BOOL averageColorEnabled; // @synthesize averageColorEnabled=_averageColorEnabled;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, copy, nonatomic) NSArray *luminanceValues; // @synthesize luminanceValues=_luminanceValues;
@property(readonly, nonatomic) double luminanceAmount; // @synthesize luminanceAmount=_luminanceAmount;
- (void).cxx_destruct;
- (void)_processMaterialFilteringDescription:(id)arg1 defaultingToIdentity:(BOOL)arg2;
- (id)initWithMaterialDescription:(id)arg1 andDescendantDescriptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

