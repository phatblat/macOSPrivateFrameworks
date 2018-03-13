//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

__attribute__((visibility("hidden")))
@interface SCRCollectionItem : SCRGroup
{
}

- (BOOL)moveOutWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldAutoFocusOnChildren;
- (BOOL)toggleMultipleSelectionWithRequest:(id)arg1;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)setSingleSelectionWithRequest:(id)arg1;
- (BOOL)moveToLastVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToLastElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveDownWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveUpWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveLeftWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (BOOL)moveRightWithEvent:(id)arg1 request:(id)arg2 allowFullWrapping:(BOOL)arg3;
- (id)_collectionItemSection;
- (BOOL)_collectionItemShouldDeferMovementToSection;
- (id)roleDescription;
- (id)onlyChild;
- (BOOL)isCollectionItem;

@end

