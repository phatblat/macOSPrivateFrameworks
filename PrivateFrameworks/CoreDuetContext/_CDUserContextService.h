//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSString, NSXPCListener, _CDInMemoryUserContext;

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate>
{
    id <_CDContextPersisting> _persistence;
    _CDInMemoryUserContext *_userContext;
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSMutableSet *_openRegistrations;
    NSMutableSet *_firedRegistrations;
}

+ (id)sharedInstanceWithSharedMemoryStore:(id)arg1;
@property(retain, nonatomic) NSMutableSet *firedRegistrations; // @synthesize firedRegistrations=_firedRegistrations;
@property(retain, nonatomic) NSMutableSet *openRegistrations; // @synthesize openRegistrations=_openRegistrations;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) _CDInMemoryUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) id <_CDContextPersisting> persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)clientWasInterrupted:(id)arg1;
- (void)deleteSavedData;
- (void)start;
- (void)regenerateState;
- (void)informClientOfFiredRegistration:(id)arg1;
- (id)obtainFiredRegistrationMatchingRegistration:(id)arg1;
- (void)removeOpenRegistration:(id)arg1;
- (void)addOpenRegistration:(id)arg1;
- (id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

