//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "RPCompanionLinkXPCClientInterface.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCConnection;

@interface RPDiscovery : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface>
{
    BOOL _activateCalled;
    struct NSMutableDictionary *_endpointMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    BOOL _targetUserSession;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    unsigned long long _controlFlags;
    CDUnknownBlockType _foundHandler;
    CDUnknownBlockType _lostHandler;
    CDUnknownBlockType _changedHandler;
    NSString *_serviceType;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType changedHandler; // @synthesize changedHandler=_changedHandler;
@property(copy, nonatomic) CDUnknownBlockType lostHandler; // @synthesize lostHandler=_lostHandler;
@property(copy, nonatomic) CDUnknownBlockType foundHandler; // @synthesize foundHandler=_foundHandler;
@property(nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(nonatomic) BOOL targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)xpcDiscoveryChangedEndpoint:(id)arg1;
- (void)xpcDiscoveryLostEndpoint:(id)arg1;
- (void)xpcDiscoveryFoundEndpoint:(id)arg1;
- (void)_lostAllEndpoints;
@property(readonly, copy) NSArray *discoveredEndpoints;
- (void)_scheduleRetry;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (BOOL)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
