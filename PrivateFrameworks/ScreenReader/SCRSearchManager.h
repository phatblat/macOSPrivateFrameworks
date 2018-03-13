//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableString, SCRVisualsManager;

__attribute__((visibility("hidden")))
@interface SCRSearchManager : NSObject
{
    NSMutableArray *_findTextSearchHistory;
    BOOL _findTextSearchHistoryModified;
    NSMutableString *_currentFindTextBuffer;
    long long _findTextCurrentSearchPosition;
    unsigned long long _currentFindTextInsertionPoint;
    BOOL _isFindTextSelected;
    long long _previousHeadingLevel;
    long long _previousTableItemLevel;
    SCRVisualsManager *__visualsManager;
}

+ (void)initialize;
+ (id)searchManager;
@property(readonly, retain, nonatomic) SCRVisualsManager *_visualsManager; // @synthesize _visualsManager=__visualsManager;
- (id)_searchNotFoundString:(struct _SCRSearchData *)arg1;
- (id)_searchNoExistingTypeString:(struct _SCRSearchData *)arg1;
- (struct _NSRange)rangeForAttribute:(unsigned long long)arg1 direction:(unsigned long long)arg2 fromLocation:(double)arg3 element:(id)arg4;
- (BOOL)_originalElementMatchesSearchCriteria:(struct _SCRSearchData *)arg1;
- (id)_searchResultMarkerForWebTextField:(id)arg1 data:(struct _SCRSearchData *)arg2;
- (BOOL)_handleTextSearchResult:(id)arg1 fromElement:(id)arg2 request:(id)arg3;
- (id)_performRemoteSearchWithSearchString:(id)arg1 searchKey:(unsigned long long)arg2 direction:(unsigned long long)arg3 element:(id)arg4;
- (unsigned long long)performSearchWithSearchString:(id)arg1 orAttribute:(unsigned long long)arg2 inDirection:(unsigned long long)arg3 request:(id)arg4 element:(id)arg5 stayWithin:(id)arg6;
- (id)_performWrapWithElement:(id)arg1 data:(struct _SCRSearchData *)arg2 direction:(unsigned long long)arg3;
- (unsigned long long)_disclosureLevelForUIElement:(id)arg1;
- (void)_fallbackOnFailedSearchWithElement:(id)arg1 data:(struct _SCRSearchData *)arg2 request:(id)arg3;
- (unsigned long long)_performSearchWithSearchString:(id)arg1 element:(id)arg2 container:(id)arg3 data:(struct _SCRSearchData *)arg4 direction:(unsigned long long)arg5 marker:(id)arg6 request:(id)arg7 brailleFocusedElement:(id *)arg8;
- (id)_moveToNonWebTextElement:(id)arg1 uiElement:(id)arg2;
- (unsigned long long)_performSearchWithSearchString:(id)arg1 webText:(id)arg2 uiElement:(id)arg3 data:(struct _SCRSearchData *)arg4 direction:(unsigned long long)arg5 marker:(id)arg6 request:(id)arg7;
- (id)_replaceImageContainedByLinkWithLinkIfNeeded:(id)arg1;
- (void)_populateDataWithTextElement:(id)arg1 data:(struct _SCRSearchData *)arg2;
- (id)_populateDataWithWebTextElement:(id)arg1 data:(struct _SCRSearchData *)arg2 direction:(unsigned long long)arg3;
- (void)_populateDataWithStitchedTextElement:(id)arg1 data:(struct _SCRSearchData *)arg2 direction:(unsigned long long)arg3;
- (id)_elementSearchWithStartElement:(id)arg1 searchData:(struct _SCRSearchData *)arg2;
- (id)_elementSearchContainerForElement:(id)arg1;
- (id)_elementForMarker:(id)arg1;
- (id)_uiElementForMarker:(id)arg1;
- (id)_markerForElement:(id)arg1;
- (unsigned long long)_findPreviousItemWithSearchKey:(unsigned long long)arg1 request:(id)arg2;
- (unsigned long long)_findNextItemWithSearchKey:(unsigned long long)arg1 request:(id)arg2;
- (unsigned long long)_findText:(id)arg1 inDirection:(unsigned long long)arg2 request:(id)arg3 element:(id)arg4;
- (void)_updateElementRotor:(unsigned long long)arg1;
- (BOOL)handleSearchOperationWithEvent:(id)arg1 request:(id)arg2 element:(id)arg3;
- (void)_saveFindTextSearchHistory;
- (void)_sendBrailleLineForSearch:(id)arg1 withSelection:(struct _NSRange)arg2;
- (BOOL)_switchStringBuffer:(unsigned long long)arg1 request:(id)arg2;
- (void)_addFindTextSearchStringToHistory:(id)arg1;
- (BOOL)_moveFindTextInsertionPointForward:(BOOL)arg1 request:(id)arg2;
- (BOOL)_outputFindText:(id)arg1 request:(id)arg2;
- (BOOL)_deleteFindText:(id)arg1 request:(id)arg2;
- (BOOL)_processFindTextCharacterEntryWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_handlePasteCommand:(id)arg1;
- (void)_updateFindTextDisplay;
- (BOOL)enableFindTextModeWithRequest:(id)arg1 element:(id)arg2;
- (void)_setCurrentFindTextBuffer:(id)arg1;
- (BOOL)_handleSearchCanceledWithEvent:(id)arg1 request:(id)arg2 element:(id)arg3;
- (BOOL)handleTaggedOperationWithEvent:(id)arg1 request:(id)arg2 element:(id)arg3;
- (void)_setSearchWindowSelectionRange:(struct _NSRange)arg1;
- (void)_setSearchWindowText:(id)arg1;
- (void)_setSearchWindowEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

