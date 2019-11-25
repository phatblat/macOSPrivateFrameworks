//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOperationQueue, NSString, WBSBrowserTabCompletionInfo;

@interface WBSBrowserTabCompletionProvider : NSObject
{
    NSOperationQueue *_queue;
    NSArray *_tabInfos;
    WBSBrowserTabCompletionInfo *_selectedTabInfo;
    id <WBSBrowserTabCompletionProviderSource> _dataSource;
    id <WBSBrowserTabCompletionProviderDelegate> _delegate;
    NSString *_currentQuery;
    NSArray *_currentTabCompletionMatches;
}

@property(readonly, copy, nonatomic) NSArray *currentTabCompletionMatches; // @synthesize currentTabCompletionMatches=_currentTabCompletionMatches;
@property(readonly, copy, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak id <WBSBrowserTabCompletionProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WBSBrowserTabCompletionProviderSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (unsigned long long)_distanceFromSelectedTabForTabMatch:(id)arg1;
- (long long)_compareTabMatch:(id)arg1 otherTabMatch:(id)arg2;
- (void)_tabCompletionOperationCompletedForQuery:(id)arg1 matches:(id)arg2 tabInfos:(id)arg3 selectedTabInfo:(id)arg4;
- (void)_performTabCompletionOperationForQuery:(id)arg1 tabInfos:(id)arg2 selectedTabInfo:(id)arg3 forQueryID:(long long)arg4;
- (id)bestTabCompletionMatchFromMatches:(id)arg1 withTopHitURL:(id)arg2 isBestMatchTopHit:(char *)arg3;
- (id)bestTabCompletionMatchWithTopHitURL:(id)arg1 isBestMatchTopHit:(char *)arg2;
- (void)invalidate;
- (void)setCurrentQuery:(id)arg1 forQueryID:(long long)arg2;
- (id)init;

@end

