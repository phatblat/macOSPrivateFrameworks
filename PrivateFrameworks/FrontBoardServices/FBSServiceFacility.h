//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSInvalidatable.h"

@class FBSSerialQueue, NSMutableSet, NSSet, NSString;

@interface FBSServiceFacility : NSObject <BSDescriptionProviding, BSInvalidatable>
{
    NSString *_identifier;
    FBSSerialQueue *_queue;
    NSSet *_prerequisiteMilestones;
    NSMutableSet *_clients;
    NSSet *_clients_immutable;
    struct os_unfair_lock_s _clients_immutable_lock;
    BOOL _invalidated;
}

@property(readonly, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (BOOL)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;
- (void)queue_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)queue_clientDidDisconnect:(id)arg1;
- (BOOL)queue_clientDidConnect:(id)arg1 withMessage:(id)arg2;
@property(readonly, nonatomic) NSSet *_prerequisiteMilestones;
@property(readonly, nonatomic) NSSet *clients;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

