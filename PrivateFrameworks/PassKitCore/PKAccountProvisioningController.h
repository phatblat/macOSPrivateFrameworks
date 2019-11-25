//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString, PKAccountCredential, PKPaymentProvisioningController;

@interface PKAccountProvisioningController : NSObject
{
    PKAccountCredential *_accountCredential;
    PKPaymentProvisioningController *_provisioningController;
    BOOL _makeDefaultInAMP;
    NSObject<OS_dispatch_source> *_activationTimer;
    BOOL _usingRemoteLibrary;
    BOOL _passIsActivated;
    BOOL _didAddToAMP;
    double _passActivationTimeout;
    id <PKAccountProvisioningControllerDelegate> _delegate;
    NSString *_provisionedPassUniqueID;
    unsigned long long _provisionLocalPassState;
    unsigned long long _localPassActivationState;
    unsigned long long _provisionWatchPassState;
    unsigned long long _addToIDMSState;
    unsigned long long _makeAccountPassDefaultOnLocalDeviceState;
    unsigned long long _addToAMPState;
}

+ (BOOL)_isPaymentPassActivated:(id)arg1 forAccountCredential:(id)arg2;
@property(readonly, nonatomic) unsigned long long addToAMPState; // @synthesize addToAMPState=_addToAMPState;
@property(readonly, nonatomic) unsigned long long makeAccountPassDefaultOnLocalDeviceState; // @synthesize makeAccountPassDefaultOnLocalDeviceState=_makeAccountPassDefaultOnLocalDeviceState;
@property(readonly, nonatomic) unsigned long long addToIDMSState; // @synthesize addToIDMSState=_addToIDMSState;
@property(readonly, nonatomic) unsigned long long provisionWatchPassState; // @synthesize provisionWatchPassState=_provisionWatchPassState;
@property(readonly, nonatomic) unsigned long long localPassActivationState; // @synthesize localPassActivationState=_localPassActivationState;
@property(readonly, nonatomic) unsigned long long provisionLocalPassState; // @synthesize provisionLocalPassState=_provisionLocalPassState;
@property(nonatomic) BOOL didAddToAMP; // @synthesize didAddToAMP=_didAddToAMP;
@property(copy, nonatomic) NSString *provisionedPassUniqueID; // @synthesize provisionedPassUniqueID=_provisionedPassUniqueID;
@property(nonatomic) __weak id <PKAccountProvisioningControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double passActivationTimeout; // @synthesize passActivationTimeout=_passActivationTimeout;
- (void).cxx_destruct;
- (void)_informDelegateOfStateUpdate;
- (void)_informDelegateOfError:(id)arg1;
- (void)_handlePassActiviated;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_stopPassActivationObserver;
- (void)_startPassActivationObserver;
- (id)_notificationDidChangeNames;
- (void)_provisionAccountCredenital:(id)arg1 provisoningController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processRemainingTasks;
- (void)provisionAccountPassToWatchAsDefault:(BOOL)arg1;
- (void)addToIDMS;
- (void)addToAMPAsDefault:(BOOL)arg1;
- (void)makeAccountPassDefaultOnLocalDevice;
- (void)provisionAccountPassToLocalDevice;
- (void)dealloc;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 usingRemoteLibrary:(BOOL)arg3;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 accountService:(id)arg3;

@end

