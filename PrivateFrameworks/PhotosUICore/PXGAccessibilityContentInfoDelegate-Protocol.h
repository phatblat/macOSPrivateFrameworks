//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<PXAccessibilityView>, PXGReusableAccessibilityContentInfo;

@protocol PXGAccessibilityContentInfoDelegate <NSObject>
- (NSObject<PXAccessibilityView> *)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (void)scrollToAccessibilityElement:(PXGReusableAccessibilityContentInfo *)arg1;
- (PXGReusableAccessibilityContentInfo *)siblingForElement:(PXGReusableAccessibilityContentInfo *)arg1 inDirection:(unsigned long long)arg2;
- (void)handleAccessibilitySelectedCells:(NSArray *)arg1;
- (void)handleAccessibilitySelectedChildren:(NSArray *)arg1;
- (BOOL)accessibilityPerformShowDefaultUIWithElement:(PXGReusableAccessibilityContentInfo *)arg1;
- (BOOL)accessibilityPerformShowAlternateUIWithElement:(PXGReusableAccessibilityContentInfo *)arg1;
- (BOOL)accessibilityPerformShowMenuWithElement:(PXGReusableAccessibilityContentInfo *)arg1;
- (BOOL)accessibilityPerformPressWithElement:(PXGReusableAccessibilityContentInfo *)arg1;
@end
