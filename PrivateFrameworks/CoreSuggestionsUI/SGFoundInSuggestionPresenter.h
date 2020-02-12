//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsUI/SGSuggestionPresenter.h>

@class NSArray;

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter
{
    CDUnknownBlockType _filterBlock;
    NSArray *_searchableItems;
    unsigned long long _contentOptions;
    id <NSObject> _contactStoreObserverToken;
    BOOL _loadScheduled;
}

- (void).cxx_destruct;
- (id)formatMixedCategoriesTitle:(id)arg1;
- (void)_loadedRealtimeSuggestions:(id)arg1;
- (void)_loadSuggestions;
- (void)_setNeedsToReloadSuggestionsAfter:(double)arg1;
- (void)reloadSuggestionsFromSearchableItems;
- (void)addSuggestionsFromSearchableItems:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
@property(copy) NSArray *realtimeSuggestions;
- (void)dealloc;

@end

