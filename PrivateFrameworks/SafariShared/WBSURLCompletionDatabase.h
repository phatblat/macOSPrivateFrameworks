//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBSURLCompletionDatabase : NSObject
{
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _fullTextBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _fullTextHistoryMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _prefixBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
    id <WBSURLCompletionDataSource> _dataSource;
}

+ (BOOL)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const struct BookmarkAndHistoryCompletionMatch *)arg1;
+ (void)initializeURLCompletionOnMainThread;
@property(nonatomic) __weak id <WBSURLCompletionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(Vector_e248a3e8 *)arg2 bookmarkMatches:(Vector_e248a3e8 *)arg3;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(Vector_e248a3e8 *)arg2 bookmarkMatches:(Vector_e248a3e8 *)arg3 dataTypes:(unsigned int)arg4;
- (void)_getSortedMatchesForTypedString:(id)arg1 topHits:(Vector_e248a3e8 *)arg2 historyMatches:(Vector_e248a3e8 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_e248a3e8 *)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(BOOL)arg7;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(Vector_e248a3e8 *)arg1;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(Vector_e248a3e8 *)arg2 historyMatches:(Vector_e248a3e8 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_e248a3e8 *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(Vector_e248a3e8 *)arg2 historyMatches:(Vector_e248a3e8 *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_e248a3e8 *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)clearMatchesCaches;
- (void)clearHistoryMatchesCache;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(BOOL)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id *)arg2 matches:(id *)arg3 limit:(unsigned long long)arg4;
- (id)init;

@end

