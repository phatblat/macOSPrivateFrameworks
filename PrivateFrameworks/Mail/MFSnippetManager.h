//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFSnippetCalculatorDelegate.h"

@class MFSnippetCalculator, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFSnippetManager : NSObject <MFSnippetCalculatorDelegate>
{
    NSMutableSet *_messagesNeedingBodies;
    id _pendingSnippetsLock;
    NSMutableDictionary *_pendingSnippetDictionariesByStore;
    BOOL _queuedUpdate;
    MFSnippetCalculator *_snippetCalculator;
    NSOperationQueue *_snippetCommitQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
@property(readonly, nonatomic) NSOperationQueue *snippetCommitQueue; // @synthesize snippetCommitQueue=_snippetCommitQueue;
@property(readonly, nonatomic) MFSnippetCalculator *snippetCalculator; // @synthesize snippetCalculator=_snippetCalculator;
- (void).cxx_destruct;
- (void)_commitPendingSnippets;
- (void)_queueCommitPendingSnippets;
- (void)snippetCalculator:(id)arg1 didSkipMessages:(id)arg2;
- (void)snippetCalculator:(id)arg1 didCalculateSnippet:(id)arg2 forMessage:(id)arg3;
- (void)_messageBodyDataAvailable:(id)arg1;
- (id)fetchSnippetsForMessages:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

