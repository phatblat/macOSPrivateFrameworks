//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPDAuthClientProtocol.h"
#import "NSURLSessionDelegate.h"

@class HPDAuthChallengeHandler, HPDReachability, NSMapTable, NSString, NSURLSession;

@interface DDMObjectManager : NSObject <HPDAuthClientProtocol, NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    NSMapTable *_ddmObjectCache;
    NSMapTable *_ddmBookCache;
    NSMapTable *_topicPreloadsByBook;
    HPDAuthChallengeHandler *_authHandler;
    HPDReachability *_reachability;
}

+ (BOOL)isOnline;
+ (id)sharedObjectManager;
@property(retain, nonatomic) HPDReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) HPDAuthChallengeHandler *authHandler; // @synthesize authHandler=_authHandler;
@property(retain, nonatomic) NSMapTable *topicPreloadsByBook; // @synthesize topicPreloadsByBook=_topicPreloadsByBook;
@property(retain, nonatomic) NSMapTable *ddmBookCache; // @synthesize ddmBookCache=_ddmBookCache;
@property(retain, nonatomic) NSMapTable *ddmObjectCache; // @synthesize ddmObjectCache=_ddmObjectCache;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (void)_resetSession;
- (void)processEventNotification:(id)arg1;
- (void)_authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_errorFromHTTPURLResponse:(id)arg1 data:(id)arg2;
- (void)_executeURLRequest:(id)arg1 retryCount:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestTopicWithID:(id)arg1 fromBook:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cachedTopicWithID:(id)arg1 fromBook:(id)arg2;
- (void)_queueLoadsForTocItems:(id)arg1 ofBook:(id)arg2;
- (void)_requestBookWithHelpBook:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestBookWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedBookWithDDMID:(id)arg1;
- (id)cachedBookWithHelpBookID:(id)arg1;
- (void)executeDDMRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_configuredSession;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

