//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_xpc_object>;

@interface ICFCallServer : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)shouldAllowIncomingCallForNumber:(id)arg1 forProviderIdentifier:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)_configureWithClient:(id)arg1;
- (void)_cleanupClient:(id)arg1;
- (void)_cleanup;
- (void)_clientConnected;
- (void)_requestCallGrantForIdentifier:(id)arg1 forProviderIdentifier:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

