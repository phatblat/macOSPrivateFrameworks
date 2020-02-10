//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSProgressIndicator, NSTimer, NUIContainerBoxView, SFCard, SearchUIBackgroundView, SearchUICardTableViewController, TLKLabel;

@interface SearchUICardViewController : NSViewController
{
    NUIContainerBoxView *_loadingView;
    NSProgressIndicator *_loadingSpinner;
    TLKLabel *_loadingLabel;
    NSTimer *_loadingScreenTimer;
    unsigned long long _level;
    SearchUICardTableViewController *_tableViewController;
}

@property(retain, nonatomic) SearchUICardTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSTimer *loadingScreenTimer; // @synthesize loadingScreenTimer=_loadingScreenTimer;
@property(retain, nonatomic) TLKLabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) NSProgressIndicator *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
@property(retain, nonatomic) NUIContainerBoxView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
@property(nonatomic) BOOL disableNextCards;
- (void)updateWithCardSections:(id)arg1;
- (void)updateTimerAndCardSections:(id)arg1;
@property(retain, nonatomic) SFCard *card;
- (void)cardViewDidAppear;
- (void)prepareLoadingView;
- (void)displayLoadingViewAfterDelay:(double)arg1 withSpinner:(BOOL)arg2;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener;
@property(nonatomic) __weak id <SearchUICardViewDelegate> delegate;
- (double)contentHeightForWidth:(double)arg1;
@property(nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property(nonatomic) BOOL shouldUseInsetRoundedSections;
- (id)initWithCard:(id)arg1 feedbackListener:(id)arg2;
- (id)initWithCard:(id)arg1 style:(unsigned long long)arg2 feedbackListener:(id)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SearchUIBackgroundView *view; // @dynamic view;

@end
