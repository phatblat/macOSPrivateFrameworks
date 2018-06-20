//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/Banner.h>

@class NSResponder, NSSearchField, NSSegmentedControl, NSTextField, NSTimer;

__attribute__((visibility("hidden")))
@interface FindBanner : Banner
{
    NSSearchField *searchField;
    NSSegmentedControl *nextPreviousControl;
    NSTextField *statusField;
    NSTimer *_clearMatchCountTimer;
    int _lastFindPasteboardChangeCount;
    unsigned int _matchCount;
    BOOL _nextReturnShouldPerformFind;
    BOOL _suppressUpdatingSearchFieldFromFindPasteboard;
    BOOL _forceUpdateSearchFieldFromFindPasteboardScheduled;
    BOOL _beepOnFailure;
    NSResponder *_supplementalSearchFieldCommandPerformer;
}

+ (unsigned int)_optionsForFindingMatches;
+ (int)bannerSortOrder;
@property(nonatomic) __weak NSResponder *supplementalSearchFieldCommandPerformer; // @synthesize supplementalSearchFieldCommandPerformer=_supplementalSearchFieldCommandPerformer;
- (void).cxx_destruct;
- (void)_windowDidUpdate:(id)arg1;
- (void)_updateSearchFieldFromFindPasteboard;
- (void)_updateNextAndPreviousButtons;
- (void)_updateHighlightedMatches;
- (void)_updateFindPasteboardFromSearchField;
- (void)_stopObservingWindowAndBannerView;
- (void)_startObservingWindowAndBannerView;
- (void)_setStatus:(id)arg1;
- (long long)_segmentIndexForFindNext;
- (long long)_segmentIndexForFindPrevious;
- (id)_searchString;
- (void)_makeSearchFieldFirstResponder;
- (id)_imageForBannerControlWithBaseName:(id)arg1;
- (void)_highlightAllMatchesIfPossible;
- (void)_findWithDirection:(BOOL)arg1 beepOnFailure:(BOOL)arg2;
- (void)_findString:(id)arg1 direction:(BOOL)arg2 beepOnFailure:(BOOL)arg3;
- (id)_computeStatusText;
- (void)_clearStatus;
- (void)_cancelClearMatchCountTimer;
- (BOOL)_canHighlightAllMatches;
- (void)_findBannerBehaviorDidChange:(id)arg1;
- (void)updateDisplayedMatchCountForString:(id)arg1 to:(unsigned int)arg2;
- (unsigned int)_optionsForCountingMatches;
- (void)hideOverlay;
- (void)setSearchFieldString:(id)arg1;
- (BOOL)readyToFind;
- (void)focusSearchField;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)takeFindBehaviorFromMenuItem:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findFromSearchField:(id)arg1;
- (void)findFromNextPreviousControl:(id)arg1;
- (void)willUninstallBannerView;
- (void)didInstallBannerView;
- (id)bannerNibName;
- (BOOL)validateMenuItem:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <FindBannerDelegate> delegate; // @dynamic delegate;

@end

