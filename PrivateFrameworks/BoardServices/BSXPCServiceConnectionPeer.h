//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class BSProcessHandle, NSMutableDictionary, NSMutableSet, NSString;

@interface BSXPCServiceConnectionPeer : NSObject <BSDescriptionProviding>
{
    BSProcessHandle *_processHandle;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_entitlements;
    NSMutableSet *_lock_connections;
    unsigned long long _lock_lastConnectedGenerationCount;
}

+ (id)_allPeers;
+ (void)invalidateConnection:(id)arg1;
+ (id)peerOfConnection:(id)arg1;
@property(readonly, retain, nonatomic) BSProcessHandle *processHandle; // @synthesize processHandle=_processHandle;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)hasEntitlement:(id)arg1;
- (id)_initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
