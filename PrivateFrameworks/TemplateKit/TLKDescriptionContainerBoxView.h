//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUIContainerBoxView.h"

@class TLKTextView;

__attribute__((visibility("hidden")))
@interface TLKDescriptionContainerBoxView : NUIContainerBoxView
{
    TLKTextView *_descriptionViewBaselineView;
}

@property(retain, nonatomic) TLKTextView *descriptionViewBaselineView; // @synthesize descriptionViewBaselineView=_descriptionViewBaselineView;
- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;

@end

