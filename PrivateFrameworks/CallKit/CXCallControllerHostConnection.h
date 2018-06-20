//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallControllerHostProtocol.h"
#import "CXCallControllerVendorProtocol.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol>
{
    BOOL _hasVoIPBackgroundMode;
    NSString *_applicationIdentifier;
    NSURL *_bundleURL;
    id <CXCallControllerHostConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_connection;
    NSSet *_capabilities;
}

@property(copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) BOOL hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak id <CXCallControllerHostConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (oneway void)requestTransaction:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)requestCalls:(CDUnknownBlockType)arg1;
- (oneway void)removeCall:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
@property(readonly, nonatomic) id <CXCallControllerVendorProtocol> remoteObjectProxy;
@property(readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL entitledForPrivateAPI;
@property(readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL entitledForPublicAPI;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
