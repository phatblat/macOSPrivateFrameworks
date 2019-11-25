//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"
#import "BSServiceConnectionListenerConfiguring.h"
#import "BSServiceListener.h"

@class BSServiceConnectionEndpoint, BSServiceManager, NSString;

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable>
{
    BSServiceManager *_manager;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    struct os_unfair_lock_s _lock;
    id <BSServiceConnectionListenerDelegate> _lock_delegate;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    struct os_unfair_lock_s _registrationLock;
    id <BSInvalidatable> _registrationLock_assertion;
    BSServiceConnectionEndpoint *_endpoint;
}

+ (void)disableLaunchWhitelist;
+ (id)listenerWithConfigurator:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *instance; // @synthesize instance=_instance;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)didReceiveConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)setService:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)_initWithManager:(id)arg1 config:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

