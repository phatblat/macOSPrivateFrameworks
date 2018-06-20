//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "RPPeopleXPCClientInterface.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSXPCConnection;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface>
{
    BOOL _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    struct NSMutableDictionary *_discoveredPeople;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    BOOL _targetUserSession;
    unsigned int _changeFlags;
    unsigned int _discoveryFlags;
    int _discoveryMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _personFoundHandler;
    CDUnknownBlockType _personLostHandler;
    CDUnknownBlockType _personChangedHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType personChangedHandler; // @synthesize personChangedHandler=_personChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType personLostHandler; // @synthesize personLostHandler=_personLostHandler;
@property(copy, nonatomic) CDUnknownBlockType personFoundHandler; // @synthesize personFoundHandler=_personFoundHandler;
@property(nonatomic) int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(nonatomic) unsigned int discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(nonatomic) BOOL targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)xpcPersonChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonLost:(id)arg1;
- (void)xpcPersonFound:(id)arg1;
- (void)_lostAllPeople;
@property(readonly, copy, nonatomic) NSArray *discoveredPeople;
- (void)_retryConsole;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (int)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
