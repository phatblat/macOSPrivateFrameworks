//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface _HMFCFHTTPServer : HMFObject <HMFLogging>
{
    id <_HMFCFHTTPServerDelegate> _delegate;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct _CFHTTPServer *_internal;
    NSMutableArray *_connections;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) struct _CFHTTPServer *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property __weak id <_HMFCFHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)setWatchdogTimeout:(double)arg1;
- (double)watchdogTimeout;
@property double connectionIdleTimeout;
- (void)dealloc;
- (id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

