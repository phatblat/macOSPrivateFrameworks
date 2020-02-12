//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutConstraint.h"

@interface NSLayoutConstraint (GKAdditions)
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct NSEdgeInsets)arg5 applyOrthogonalConstraints:(BOOL)arg6;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct NSEdgeInsets)arg5;
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2;
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2 margin:(double)arg3;
+ (void)_gkInstallEdgeConstraintsForView:(id)arg1 containedWithinParentView:(id)arg2;
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct NSEdgeInsets)arg3;
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2;
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3;
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8;
+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3;
@end

