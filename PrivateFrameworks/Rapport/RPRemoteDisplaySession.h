//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "RPAuthenticatable.h"
#import "RPMessageable.h"
#import "RPRemoteDisplayXPCClientInterface.h"

@class CUBonjourDevice, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, RPRemoteDisplayDevice, RPRemoteDisplayServer;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    struct NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_requestRegistrations;
    BOOL _needsAWDL;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    RPRemoteDisplayDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CUBonjourDevice *_bonjourDevice;
    RPRemoteDisplayDevice *_daemonDevice;
    RPRemoteDisplayServer *_server;
    NSNumber *_sessionID;
    NSXPCConnection *_xpcCnx;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(copy, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) RPRemoteDisplayServer *server; // @synthesize server=_server;
@property(nonatomic) BOOL needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(retain, nonatomic) RPRemoteDisplayDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) RPRemoteDisplayDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
- (void).cxx_destruct;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)deregisterRequestID:(id)arg1;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deregisterEventID:(id)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)tryPassword:(id)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

