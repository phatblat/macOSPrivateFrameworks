//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTDSXPCClientInterface.h"
#import "NSSecureCoding.h"

@class CUTDSEndpoint, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface CUTDSSession : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUTDSEndpoint *_endpoint;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_xpcServiceName;
    unsigned long long _tdsHashActivate;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long tdsHashActivate; // @synthesize tdsHashActivate=_tdsHashActivate;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) CUTDSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

