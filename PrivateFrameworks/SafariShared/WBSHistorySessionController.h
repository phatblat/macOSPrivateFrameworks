//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistorySessions.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, WBSHistorySessionIntervalCache;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions>
{
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

+ (id)sharedSessionController;
- (void).cxx_destruct;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (void)_loadSessionCache;
- (void)_clearSessionCache;
- (void)_removeItemsFromSessionCache:(id)arg1;
- (void)_addItemsToSessionCache:(id)arg1 shouldPostChangeNotification:(BOOL)arg2;
- (unsigned long long)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (void)_requestSessionKeyForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)_getKey:(id *)arg1 forDate:(double)arg2;
- (id)_orderedSessionKeys;
- (id)sessionForItem:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *orderedSessions;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSessions;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

