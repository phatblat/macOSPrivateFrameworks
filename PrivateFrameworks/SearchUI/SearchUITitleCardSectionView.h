//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerBoxView, TLKLabel;

@interface SearchUITitleCardSectionView : SearchUICardSectionView
{
    TLKLabel *_label;
    NUIContainerBoxView *_containerView;
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
@property(retain, nonatomic) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TLKLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

