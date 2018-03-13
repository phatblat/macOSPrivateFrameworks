//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface AVConferenceXPCServer : NSObject
{
    NSObject<OS_xpc_object> *listener;
    NSMutableArray *clientConnections;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

+ (id)AVConferenceXPCServerSingleton;
@property(readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;
@property(readonly) NSObject<OS_xpc_object> *listener; // @synthesize listener;
- (id)authorizedTokenData;
- (void)_xpc_start_listening_for_connections;
- (void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (id)newClientDiedDictionary;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (void)deregisterFromService:(char *)arg1;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 context:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_xpc_get_connections_from_list_for_context:(id)arg1;
- (id)_xpc_get_connection_from_list_for_context:(id)arg1;
- (id)_xpc_get_connection_from_list_for_connection:(id)arg1;
- (void)_xpc_remove_connections_from_list;
- (void)_xpc_remove_connection_from_list:(id)arg1;
- (void)_xpc_add_connection_to_list:(id)arg1;
- (void)_xpc_handle_incoming_request:(id)arg1;

@end

