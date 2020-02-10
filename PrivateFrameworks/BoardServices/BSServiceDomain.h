//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSDictionary, NSMutableArray, NSObject<OS_xpc_object>, NSString;

@interface BSServiceDomain : NSObject
{
    BSServiceDomainSpecification *_specification;
    struct os_unfair_lock_s _lock;
    BSXPCServiceConnectionListener *_xpcListener;
    NSString *_listenerEndpointDescription;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
}

- (void).cxx_destruct;
- (void)_disableLaunchWhitelist;
- (id)registerListener:(id)arg1;
@property(readonly, nonatomic) NSString *listenerEndpointDescription;
@property(readonly, nonatomic) BOOL listenerEndpointIsNonLaunching;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *listenerEndpoint;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_initWithSpecification:(id)arg1;
- (id)init;

@end
