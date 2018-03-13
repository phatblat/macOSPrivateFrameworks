//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CPKDataSourceProtocol.h"
#import "CPKSearchFieldDelegate.h"
#import "CPKSearchViewDelegate.h"
#import "NSWindowDelegate.h"

@class CPKBottomView, CPKCategoriesView, CPKDataProvider, CPKMatrixView, CPKSearchView, CPSearchManager, NSArray, NSDictionary, NSMutableArray, NSProgressIndicator, NSString;

__attribute__((visibility("hidden")))
@interface CPKPopoverController : NSViewController <CPKSearchViewDelegate, CPKSearchFieldDelegate, CPKDataSourceProtocol, NSWindowDelegate>
{
    CPKDataProvider *_dataProvider;
    CPKCategoriesView *_categoriesView;
    CPKMatrixView *_charactersView;
    CPKSearchView *_searchView;
    CPKBottomView *_bottomView;
    CPSearchManager *_searchManager;
    NSProgressIndicator *_spinIndicator;
    long long _lastCategoryIndex;
    long long _categoryIndexOnSearch;
    NSMutableArray *_categorySectionTitle;
    NSArray *_lastSearchResult;
    NSDictionary *_wholeCharCache;
    long long _maxSearchCount;
    long long _numberOfRecentsCategories;
    BOOL _searchViewShown;
    BOOL _draggingDetachedWindow;
    BOOL _detachedWindow;
    BOOL _enabled;
    BOOL _isEmojiIMMode;
}

@property(nonatomic) BOOL detachedWindow; // @synthesize detachedWindow=_detachedWindow;
@property(nonatomic) BOOL draggingDetachedWindow; // @synthesize draggingDetachedWindow=_draggingDetachedWindow;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property long long categoryIndexOnSearch; // @synthesize categoryIndexOnSearch=_categoryIndexOnSearch;
@property(retain) NSArray *lastSearchResult; // @synthesize lastSearchResult=_lastSearchResult;
@property(readonly) CPKSearchView *searchView; // @synthesize searchView=_searchView;
@property(readonly) CPKMatrixView *charactersView; // @synthesize charactersView=_charactersView;
@property(readonly) CPKCategoriesView *categoriesView; // @synthesize categoriesView=_categoriesView;
@property(readonly) CPKDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)_rootCategorySelected:(long long)arg1 scrollCharacters:(BOOL)arg2 clearSearch:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (void)_setupInitialFirstResponder;
- (unsigned int)glyphAtIndex:(long long)arg1 ofSection:(long long)arg2 withFallbackFont:(id *)arg3;
- (void)setHasShownDiversityAlert;
- (BOOL)hasShownDiversityAlert;
- (BOOL)isEmojiCategory:(long long)arg1;
- (BOOL)isEmojiSection:(long long)arg1;
- (long long)_categoryFromDataSection:(long long)arg1;
- (long long)_dataSectionFromTableSection:(long long)arg1;
- (BOOL)hasDiversitiesAtIndex:(long long)arg1 ofSection:(long long)arg2 wasSelected:(char *)arg3;
- (BOOL)foundString:(id)arg1 atIndex:(long long *)arg2 ofSection:(long long *)arg3;
- (id)_entityAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (id)fontAtIndex:(long long)arg1 ofSection:(long long)arg2;
- (id)stringAtIndex:(long long)arg1 ofSection:(long long)arg2 withFont:(id)arg3;
- (unsigned int)glyphAtIndex:(long long)arg1 ofSection:(long long)arg2 withFont:(id)arg3;
- (BOOL)isValidIndex:(unsigned long long)arg1 ofSection:(long long)arg2;
- (id)languageOfSection:(long long)arg1;
- (long long)numberOfDataOfSection:(long long)arg1;
- (long long)numberOfColumnOfSection:(long long)arg1;
- (id)titleOfSection:(long long)arg1 visible:(char *)arg2;
- (long long)numberOfSection;
- (void)didDoubleClickOnMatirxView:(id)arg1;
- (void)matrixView:(id)arg1 didConfirmCharacter:(id)arg2 byDrag:(BOOL)arg3;
- (void)matrixView:(id)arg1 didScrolledToSection:(long long)arg2 fromSection:(long long)arg3;
- (void)searchView:(id)arg1 shouldShowHide:(BOOL)arg2;
- (void)searchField:(id)arg1 textChangedTo:(id)arg2 searchIt:(BOOL)arg3;
- (void)_delayedReloadDataForConfirm;
- (void)_reloadDataPossiblyPostponeForConfirm;
- (void)_reloadDataPossiblyPostponeForSecondaryInit;
- (void)localeInfoUpdatedSignificantly:(id)arg1;
- (void)searchFieldDidFocused:(id)arg1;
- (void)categoryDataSecondaryInitFinished:(id)arg1;
- (void)searchFieldTextChangedImmediately:(id)arg1;
- (void)searchViewTextChangedImmediately:(id)arg1;
- (void)categoryMatrixSelectionDidChanged:(id)arg1;
- (void)characterDidSelectedInController:(id)arg1;
- (void)characterMatrixDidSelected:(id)arg1;
- (void)prefsUpdatedExternally:(id)arg1;
@property(readonly) BOOL isEmojiIMMode; // @synthesize isEmojiIMMode=_isEmojiIMMode;
- (void)openExternalCharacterViewerWindow;
- (void)popoverDidClosed;
- (void)popoverWillClosed;
- (void)popoverDidOpened;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

