//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (GKAdditionsAdditional)
- (id)_gkAncestryAffectingVisualLayout;
- (id)_gkAncestryDescription;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;
- (id)_gkRecursiveDescriptionForKey:(id)arg1;
- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;
- (BOOL)_gkSuperviewHasPerspectiveTransform;
- (double)_gkPerspectiveTransformEZ;
- (void)_gkClearPerspectiveTransform;
- (void)_gkApplyPerspectiveTransform;
@property(nonatomic) struct CGPoint integralCenter;
@end

