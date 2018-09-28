//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNAutocompleteStoreQueryHelper, CNAutocompleteStoreReproStringRecorder, CNAutocompleteUserSession, CNCancelationToken;

@interface CNAutocompleteStore : NSObject
{
    double _fetchCoalescingInterval;
    CNAutocompleteStoreQueryHelper *_queryHelper;
    CNCancelationToken *_currentFetchToken;
    CNAutocompleteUserSession *_userSession;
    CNAutocompleteStoreReproStringRecorder *_reproStringRecorder;
    id <CNAutocompleteProbeProvider> _probeProvider;
    id <CNScheduler> _scheduler;
}

+ (double)defaultFetchCoalescingInterval;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(retain, nonatomic) CNAutocompleteStoreReproStringRecorder *reproStringRecorder; // @synthesize reproStringRecorder=_reproStringRecorder;
@property(retain, nonatomic) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak CNCancelationToken *currentFetchToken; // @synthesize currentFetchToken=_currentFetchToken;
@property(readonly, nonatomic) CNAutocompleteStoreQueryHelper *queryHelper; // @synthesize queryHelper=_queryHelper;
@property(nonatomic) double fetchCoalescingInterval; // @synthesize fetchCoalescingInterval=_fetchCoalescingInterval;
- (void).cxx_destruct;
- (void)ignoreResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userSelectedResult:(id)arg1 atSortedIndex:(unsigned long long)arg2;
- (id)executeFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)executeFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1 afterDelay:(double)arg2 delegate:(id)arg3;
- (id)scheduleFetchRequest:(id)arg1 delegate:(id)arg2;
- (id)scheduleFetchRequest:(id)arg1;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider;
- (id)initWithDelegate:(id)arg1 searchProvider:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

