//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TUSearchModuleProtocol.h"

@class NSMutableArray, NSString, TUSearchController, TUSearchResults;

@interface TUCallHistorySearchModule : NSObject <TUSearchModuleProtocol>
{
    BOOL _searchComplete;
    TUSearchController *_searchController;
    NSMutableArray *_currentResultsList;
    NSString *_previousSearchString;
}

@property(nonatomic, getter=isSearchComplete) BOOL searchComplete; // @synthesize searchComplete=_searchComplete;
@property(copy, nonatomic) NSString *previousSearchString; // @synthesize previousSearchString=_previousSearchString;
@property(retain, nonatomic) NSMutableArray *currentResultsList; // @synthesize currentResultsList=_currentResultsList;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
@property(readonly) TUSearchResults *searchResults;
- (void)cancelSearch;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

