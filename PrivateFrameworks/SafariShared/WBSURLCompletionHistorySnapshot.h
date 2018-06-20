//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSURLCompletionDataSource.h"

@class NSObject<OS_dispatch_queue>, NSString, WBSURLCompletionDatabase;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource>
{
    NSObject<OS_dispatch_queue> *_completionDatabaseQueue;
    WBSURLCompletionDatabase *_completionDatabase;
    unique_ptr_91c700ae _items;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEnumeratingHistoryMatches) BOOL enumeratingHistoryMatches;
@property(readonly, nonatomic, getter=isEnumeratingBookmarkMatches) BOOL enumeratingBookmarkMatches;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (id)initWithItems:(unique_ptr_91c700ae)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

