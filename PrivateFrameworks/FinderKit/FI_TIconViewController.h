//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TCollectionViewItem.h>

__attribute__((visibility("hidden")))
@interface FI_TIconViewController : FI_TCollectionViewItem
{
}

+ (id)itemIdentifier;
- (id)_titleViews;
- (BOOL)_hasOpaquePartsInRect:(struct CGRect)arg1;
- (void)updateHighlightedOrSelectedAppearance;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlightState:(long long)arg1;
- (id)iconViewNoLoad;
- (id)iconView;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;

@end
