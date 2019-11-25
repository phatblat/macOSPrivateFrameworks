//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSession.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDownloadDelegate.h"

@class GEODataURLSessionList, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEODataSession>
{
    GEODataURLSessionList *_urlSessions;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSOperationQueue *_sessionIsolationOperationQueue;
    NSMutableDictionary *_sessionTasks;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    unsigned int _nextSessionIdentifier;
    int _symptomsAlternateAdviceToken;
}

@property(nonatomic) unsigned int nextSessionIdentifier; // @synthesize nextSessionIdentifier=_nextSessionIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *sessionTasks; // @synthesize sessionTasks=_sessionTasks;
@property(readonly, nonatomic) NSOperationQueue *sessionIsolationOperationQueue; // @synthesize sessionIsolationOperationQueue=_sessionIsolationOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
@property(readonly, nonatomic) GEODataURLSessionList *urlSessions; // @synthesize urlSessions=_urlSessions;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)tearDown;
- (id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)didReceiveMemoryPressureWarning;
- (void)dealloc;
- (id)init;
- (id)activeSessionIdentifiers;
- (void)pruneInactiveSessions;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (id)urlSessionForRequest:(id)arg1;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

