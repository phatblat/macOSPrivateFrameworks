//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CABackdropLayer.h"

@interface CABackdropLayer (CoreMaterial)
+ (id)mt_orderedFilterTypesBlurAtEnd;
+ (id)mt_orderedFilterTypes;
+ (struct CAColorMatrix)mt_colorMatrixForOpacity:(double)arg1;
+ (id)mt_keyPathForColorMatrixDrivenOpacity;
- (void)_mt_setColorMatrix:(struct CAColorMatrix)arg1 withName:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(BOOL)arg4;
- (void)_mt_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 filterOrder:(id)arg4 removingIfIdentity:(BOOL)arg5;
- (void)_mt_removeFilterOfTypeIfNecessary:(id)arg1;
- (void)_mt_removeFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithFilterOrder:(id)arg2;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 andFilterOrder:(id)arg3;
- (void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(BOOL)arg2;
@property(readonly, nonatomic) double mt_colorMatrixDrivenOpacity;
- (void)mt_applyMaterialDescription:(id)arg1 removingIfIdentity:(BOOL)arg2;
@end
