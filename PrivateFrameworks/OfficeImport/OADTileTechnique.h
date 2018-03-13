//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADImageFillTechnique.h>

__attribute__((visibility("hidden")))
@interface OADTileTechnique : OADImageFillTechnique
{
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isAlignmentOverridden;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (BOOL)isFlipModeOverridden;
- (void)setFlipMode:(int)arg1;
- (int)flipMode;
- (BOOL)isScaleYOverridden;
- (void)setScaleY:(float)arg1;
- (float)scaleY;
- (BOOL)isScaleXOverridden;
- (void)setScaleX:(float)arg1;
- (float)scaleX;
- (BOOL)isOffsetYOverridden;
- (void)setOffsetY:(float)arg1;
- (float)offsetY;
- (BOOL)isOffsetXOverridden;
- (void)setOffsetX:(float)arg1;
- (float)offsetX;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

