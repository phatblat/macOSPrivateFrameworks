//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
    BOOL __usesAppleIDContext;
}

+ (void)removeAllCachedResponses;
+ (id)_urlBagCache;
+ (id)sharedCacheReliantAnisetteFreeSession;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedAnisetteFreeURLSession;
+ (id)sharedURLSession;
+ (id)_createURLSessionUsesAppleIDContext:(BOOL)arg1;
@property(nonatomic) BOOL _usesAppleIDContext; // @synthesize _usesAppleIDContext=__usesAppleIDContext;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)beginAuthenticationDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_unsafe_retryTaskIfPossible:(id)arg1;
- (BOOL)_isRecoverableError:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_unsafe_completeTask:(id)arg1 withError:(id)arg2;
- (void)cancelDataTask:(id)arg1;
- (id)beginDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)defaultSessionObjectWithConfiguration:(id)arg1;
- (id)_URLSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

