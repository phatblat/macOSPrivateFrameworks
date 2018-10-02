//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPListStateCapturing.h"
#import "_GEONetworkDefaultsServerProxy.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing>
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    NSURLSession *_session;
    unsigned long long _stateCaptureHandle;
}

@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4;
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;
- (id)_urlRequestForNetworkDefaults;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

