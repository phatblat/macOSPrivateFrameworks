//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXMVisionFeature, NSMutableArray, NSMutableString;

@interface AXMDescriptionBuilder : NSObject
{
    long long _builderOptions;
    NSMutableString *_speakableDescription;
    NSMutableString *_visualDescription;
    NSMutableArray *_faceFeatures;
    NSMutableArray *_classificationLocalizedValues;
    NSMutableArray *_iconClassFeatures;
    AXMVisionFeature *_captionFeature;
    AXMVisionFeature *_blurFeature;
    AXMVisionFeature *_brightnessFeature;
}

+ (id)builderWithOptions:(long long)arg1;
@property(retain, nonatomic) AXMVisionFeature *brightnessFeature; // @synthesize brightnessFeature=_brightnessFeature;
@property(retain, nonatomic) AXMVisionFeature *blurFeature; // @synthesize blurFeature=_blurFeature;
- (void).cxx_destruct;
- (void)_addIconClassInformationToDescription:(id)arg1;
- (void)_addClassificationInformationToDescription:(id)arg1;
- (void)_addCaptionInformationToDescription:(id)arg1;
- (void)_addFaceInformationToDescription:(id)arg1;
- (void)_addBlurInformationToDescription:(id)arg1;
- (void)_addBrightnessInformationToDescription:(id)arg1;
- (void)_appendToDescription:(id)arg1 afterPauseType:(long long)arg2 withContents:(id)arg3;
- (void)_appendPauseType:(long long)arg1 toDescriptionIfNeeded:(id)arg2;
- (id)_stringForPauseType:(long long)arg1;
- (id)buildVisualDescription;
- (id)buildSpeakableDescription;
- (void)addDetectedIconClasses:(id)arg1;
- (void)setDetectedCaption:(id)arg1;
- (void)addDetectedClassificationLocalizedValue:(id)arg1;
- (void)addDetectedClassificationFeatures:(id)arg1;
- (void)addDetectedFaces:(id)arg1;
- (id)_initWithOptions:(long long)arg1;

@end

