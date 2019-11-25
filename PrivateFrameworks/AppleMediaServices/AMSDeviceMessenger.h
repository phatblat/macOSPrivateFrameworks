//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSDeviceMessengerClientInterface.h"

@class AMSDaemonConnection, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface>
{
    id <AMSDeviceMessengerServiceInterface> _proxyObject;
    AMSDaemonConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updateHandlers;
}

@property(retain) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) AMSDaemonConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_sendDelegateUpdateForMessage:(id)arg1;
- (id)_identifierFromDialogRequest:(id)arg1;
- (id)_getProxyObject;
- (void)deviceMessengerDidUpdateDevices;
- (void)deviceMessengerDidReceiveReply:(id)arg1;
- (void)deviceMessengerDidReceiveMessage:(id)arg1;
- (void)deviceMessengerDidClearMessage:(id)arg1;
- (id)sendDialog:(id)arg1 account:(id)arg2;
- (void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

