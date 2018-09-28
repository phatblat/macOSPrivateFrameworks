//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SFXPCInterface.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, SDAutoFillAgent;

@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dismissUserNotificationHandler;
    CDUnknownBlockType _pairingResponseHandler;
    CDUnknownBlockType _promptForPINHandler;
    SDAutoFillAgent *_agent;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SDAutoFillAgent *agent; // @synthesize agent=_agent;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType pairingResponseHandler; // @synthesize pairingResponseHandler=_pairingResponseHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissUserNotificationHandler; // @synthesize dismissUserNotificationHandler=_dismissUserNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)clientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)clientPairingSucceeded:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientDismissUserNotification;
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)autoFillPairingSucceeded:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoFillDismissUserNotification;
- (void)serverUserNotificationDidDismiss:(id)arg1;
- (void)serverUserNotificationDidActivate:(id)arg1;
- (void)serverTryPIN:(id)arg1;
- (void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

