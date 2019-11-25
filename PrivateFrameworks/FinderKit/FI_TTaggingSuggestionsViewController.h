//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TLabelView, FI_TTableView, FI_TTaggingTokenField;

__attribute__((visibility("hidden")))
@interface FI_TTaggingSuggestionsViewController : FI_TViewController
{
    struct TNSRef<FI_TTableView, void> _tableView;
    struct TNSRef<FI_TLabelView, void> _labelColorView;
    struct TNSWeakPtr<FI_TTaggingTokenField, void> _weakTokenField;
    _Bool _showLabelColorView;
    _Bool _showingAll;
    _Bool _needShowAll;
    struct TString _previousTypedPartOfMatchingName;
    _Bool _fadeScrolledRows;
    struct TNSRef<NSImage, void> _topClipViewMaskImage;
    struct TNSRef<NSImage, void> _bottomClipViewMaskImage;
    struct TNSRef<NSImage, void> _topAndBottomClipViewMaskImage;
    double _lastIndexSelected;
    double _lastScrollOffset;
    struct TNotificationCenterObserver _tagRegistryChangedObserver;
    struct TNotificationCenterObserver _generateNewTagCompletionsObserver;
    struct TNotificationCenterObserver _suggestionsWillShowObserver;
    struct TNotificationCenterObserver _clipViewFrameChangedObserver;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver _showAllIsSelectedObserver;
    struct TNSRef<NSLayoutConstraint, void> _maxHeightConstraint;
}

@property(nonatomic) _Bool showLabelColorView; // @synthesize showLabelColorView=_showLabelColorView;
@property _Bool fadeScrolledRows; // @synthesize fadeScrolledRows=_fadeScrolledRows;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clipViewBoundsOrFrameChanged;
- (void)configureClipViewMask;
- (void)labelColorChanged:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)doCustomSelectionIfNeeded;
- (void)updateMaxHeightConstraint;
- (double)calcMaxHeight;
- (long long)numberOfRowsWhenShowingAll;
- (long long)numberOfTopTagsToSuggest;
- (_Bool)showSuggestionsForString:(const struct TString *)arg1;
- (void)showAll:(id)arg1;
- (id)sortByNameDescriptor;
- (id)sortBySidebarIndexDescriptor;
- (id)tokenizedTagsListedInField;
- (long long)indexOfNontokenizedObject;
- (id)tokenizedTagPriorToNonTokenized;
- (long long)indexBeforeNontokenizedObject;
- (void)moveToPreviousOrNextSuggestion:(_Bool)arg1;
- (void)sendArrowKeyToTable:(unsigned short)arg1;
- (void)insertSuggestionAndSelectUntypedPortionForString:(const struct TString *)arg1;
- (void)generateNewTagCompletionsForString:(const struct TString *)arg1;
- (void)generateNewTagCompletions:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (id)textView;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
@property(nonatomic) __weak FI_TTaggingTokenField *taggingTokenField;
- (void)tearDownClipViewMask;
- (void)aboutToTearDown;
- (id)suggestionsDataSource;
- (id)nibName;
- (id)dataSource;
- (id)tableViewNoLoad;
@property(retain, nonatomic) FI_TLabelView *labelColorView; // @dynamic labelColorView;
@property(retain, nonatomic) FI_TTableView *tableView; // @dynamic tableView;
- (id)stackView;
- (void)viewLoaded;

@end

