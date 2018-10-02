//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    BOOL _requiresSigning;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_pendingSessionOperations;
}

+ (id)sharedSigningSession;
+ (id)sharedSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2;
- (void)_sessionQueue_enqueueTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bodyTaskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bodyTaskWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataTaskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initRequiringSigning:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

