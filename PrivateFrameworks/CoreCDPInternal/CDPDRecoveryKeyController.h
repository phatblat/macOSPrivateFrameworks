//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPDRecoveryKeyValidatorInternalDelegate.h"

@class CDPContext, CDPDPCSController, CDPDSecureBackupController, NSString;

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate>
{
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
    id <CDPStateUIProviderInternal> _uiProvider;
    id <CDPDCircleProxy> _circleProxy;
    id <CDPDSecureBackupProxy> _sbProxy;
    id <CDPAuthProviderInternal> _recoveryAuthProvider;
    id <CDPDAuthProviderInternal> _internalAuthProvider;
}

@property(retain, nonatomic) id <CDPDAuthProviderInternal> internalAuthProvider; // @synthesize internalAuthProvider=_internalAuthProvider;
@property(retain, nonatomic) id <CDPAuthProviderInternal> recoveryAuthProvider; // @synthesize recoveryAuthProvider=_recoveryAuthProvider;
@property(retain, nonatomic) id <CDPDSecureBackupProxy> sbProxy; // @synthesize sbProxy=_sbProxy;
@property(retain, nonatomic) id <CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (void)enableBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recoverDataUsingMasterKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateRandomRecoveryKey:(CDUnknownBlockType)arg1;
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (void)recoverAndSynchronizeStateWithServer:(CDUnknownBlockType)arg1;
- (void)recoverState:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 pcsProxy:(id)arg6;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

