//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSObject<OS_dispatch_queue>, NSString, SFDevice, SFSession;

@interface SFRemoteAutoFillSession : NSObject
{
    BOOL _activateCalled;
    NSString *_contextBundleID;
    NSString *_contextLocalizedAppName;
    int _contextRequestState;
    NSString *_contextUnlocalizedAppName;
    NSArray *_contextAssociatedDomains;
    NSString *_contextURL;
    BOOL _invalidateCalled;
    BOOL _pairingFinishedNotified;
    NSDate *_pairClock;
    int _pairState;
    struct PairingSubstate _pairSubstate;
    int _passwordPickerState;
    NSString *_pickedPassword;
    NSString *_pickedUsername;
    int _sendCredentialsState;
    SFSession *_session;
    int _sessionState;
    BOOL _prefPairContactsDisabled;
    BOOL _prefPairHomeKitDisabled;
    BOOL _prefPairVerifyDisabled;
    BOOL _prefPairVisualDisabled;
    CDUnknownBlockType _completedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    CDUnknownBlockType _pairingFinishedHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForPickerHandler;
}

@property(copy, nonatomic) CDUnknownBlockType promptForPickerHandler; // @synthesize promptForPickerHandler=_promptForPickerHandler;
@property(copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property(copy, nonatomic) CDUnknownBlockType pairingFinishedHandler; // @synthesize pairingFinishedHandler=_pairingFinishedHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completedHandler; // @synthesize completedHandler=_completedHandler;
- (void).cxx_destruct;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2;
- (int)_runSendCredentials;
- (void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3;
- (int)_runPasswordPicker;
- (void)_handleContextRequestResponse:(id)arg1 error:(id)arg2;
- (int)_runContextRequest;
- (int)_runPairVisual;
- (int)_runPairPIN;
- (int)_runPairVerify;
- (int)_runPairHomeKit;
- (int)_runPairContacts;
- (int)_runPair;
- (int)_runSessionStart;
- (void)_run;
- (void)_completedWithError:(id)arg1;
- (void)tryPIN:(id)arg1;
- (void)_cleanup;
- (void)invalidate;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

