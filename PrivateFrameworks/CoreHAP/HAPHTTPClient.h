//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HAPHTTPClient : HMFObject
{
    struct HTTPClientPrivate *_httpClient;
    BOOL _invalidateRequested;
    NSString *_dnsName;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAPHTTPClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HAPHTTPClientDebugDelegate> _debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
}

@property(nonatomic) BOOL invalidateRequested; // @synthesize invalidateRequested=_invalidateRequested;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *debugDelegateQueue; // @synthesize debugDelegateQueue=_debugDelegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPHTTPClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *dnsName; // @synthesize dnsName=_dnsName;
- (void).cxx_destruct;
- (BOOL)_debugDelegateRespondsToSelector:(SEL)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id *)arg2;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id *)arg2;
-     // Error parsing type: v32@0:8^{HTTPMessagePrivate={__CFRuntimeBase=QAQ}^{HTTPMessagePrivate}{?=[8192c]Q*Q*Qi*Q{?=*Q*Q*Q*Q*Q*Q*Q***Q*Q}*Qi*QCQCi}CiC*QQQ[32000C]*^{?}*Q[2{iovec=^vQ}]^{iovec}iQiii^v^v^v^v^v^v^?^?@?iCq*iQ}16@?24, name: _handleHTTPResponseForMessage:completionHandler:
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id *)arg3;
- (int)_initializeCoreUtilsHTTPClient;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;

@end

