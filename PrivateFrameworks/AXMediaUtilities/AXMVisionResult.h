//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class AXMDiagnostics, AXMLanguage, AXMVisionFeature, CIImage, NSArray, NSNumber, NSObject<NSSecureCoding>, NSSet, NSString;

@interface AXMVisionResult : NSObject <NSSecureCoding>
{
    CIImage *_image;
    NSArray *_features;
    NSSet *_evaluatedFeatureTypes;
    NSNumber *_appliedImageOrientation;
    AXMDiagnostics *_diagnostics;
    long long _imageRegistrationState;
    NSObject<NSSecureCoding> *_userContext;
    NSString *_detectedFeatureDescription;
    NSString *_detectedTextDescription;
}

+ (BOOL)supportsSecureCoding;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4 userContext:(id)arg5;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4;
@property(retain, nonatomic) NSString *detectedTextDescription; // @synthesize detectedTextDescription=_detectedTextDescription;
@property(retain, nonatomic) NSString *detectedFeatureDescription; // @synthesize detectedFeatureDescription=_detectedFeatureDescription;
@property(retain, nonatomic) NSObject<NSSecureCoding> *userContext; // @synthesize userContext=_userContext;
@property(nonatomic) long long imageRegistrationState; // @synthesize imageRegistrationState=_imageRegistrationState;
@property(retain, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property(retain, nonatomic) NSSet *evaluatedFeatureTypes; // @synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *localizedDetectedIconHint;
@property(readonly, nonatomic) NSString *localizedDetectedTextHint;
@property(readonly, nonatomic) AXMLanguage *detectedTextLanguage;
@property(readonly, nonatomic) AXMVisionFeature *assetMetadataFeature;
@property(readonly, nonatomic) AXMVisionFeature *colorInfoFeature;
- (id)sortedFeatures;
- (id)_init;
@property(readonly, nonatomic) NSArray *iconClassFeatures;
@property(readonly, nonatomic) NSArray *brightnessFeatures;
@property(readonly, nonatomic) NSArray *blurFeatures;
@property(readonly, nonatomic) NSArray *ocrFeatures;
@property(readonly, nonatomic) NSArray *modelClassificationFeatures;
@property(readonly, nonatomic) NSArray *captionFeatures;
@property(readonly, nonatomic) NSArray *objectClassificationFeatures;
@property(readonly, nonatomic) NSArray *sceneClassificationFeatures;
@property(readonly, nonatomic) NSArray *faceFeatures;

@end

