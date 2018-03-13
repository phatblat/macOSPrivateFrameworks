//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableIndexSet, NSMutableSet, NSObject<OS_dispatch_queue>, PKAssertion;

@interface PKAutomaticPassPresentationSuppressor : NSObject
{
    PKAssertion *_suppressionAssertion;
    NSMutableSet *_permissionRequestCompletionBlocks;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    long long _permissionState;
    unsigned long long _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestPermissionAndAquireSupressionAssertionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) BOOL isSuppressing;
- (void)endSuppressionWithRequestToken:(unsigned long long)arg1;
- (unsigned long long)requestSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

