//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRJSObject.h"

#import "CKAccountObserver.h"
#import "NSSecureCoding.h"

@class CKStoreClient, FRJSAppleAccountStore, FRJSCodeRedeemer, FRWKView, NSString;

@interface FRJSRootObject : FRJSObject <CKAccountObserver, NSSecureCoding>
{
    BOOL _startedProgressSpinner;
    FRWKView *_webView;
    CKStoreClient *_storeClient;
    FRJSAppleAccountStore *_jsAccountStore;
    FRJSCodeRedeemer *_jsCodeRedeemer;
    id _accountStoreObserverToken;
}

@property(retain, nonatomic) id accountStoreObserverToken; // @synthesize accountStoreObserverToken=_accountStoreObserverToken;
@property(nonatomic) BOOL startedProgressSpinner; // @synthesize startedProgressSpinner=_startedProgressSpinner;
@property(readonly, nonatomic) FRJSCodeRedeemer *jsCodeRedeemer; // @synthesize jsCodeRedeemer=_jsCodeRedeemer;
@property(readonly, nonatomic) FRJSAppleAccountStore *jsAccountStore; // @synthesize jsAccountStore=_jsAccountStore;
@property(retain, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
@property(readonly, nonatomic) __weak FRWKView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_triggerDownloadQueueCheck;
- (void)_signTouchIDChallenge:(id)arg1;
- (id)_signStorePlatformRequestData:(id)arg1;
- (BOOL)_sendAccountCreationRequest:(id)arg1;
- (void)_setCookies:(id)arg1;
- (void)_viewAccount:(id)arg1;
- (void)_signOut:(id)arg1;
- (id)_getUserDSID:(id)arg1;
- (id)_getUserAppleID:(id)arg1;
- (void)_deauthorizeMachine;
- (void)_authorizeMachine:(id)arg1;
- (void)_authenticateForAccount:(id)arg1 withOptions:(id)arg2 callback:(id)arg3;
- (id)_accountForDSID:(id)arg1;
- (id)callFunction:(id)arg1 withArguments:(id)arg2;
- (void)doDialogXMLWithArgs:(id)arg1;
- (void)showSharingPickerForServicesNamed:(id)arg1 fromPageRect:(struct CGRect)arg2 sharingOptions:(id)arg3;
- (void)shareWithServiceNamed:(id)arg1 sharingOptions:(id)arg2;
- (id)prepareSharingArgumentsWithOptions:(id)arg1;
- (void)_buy:(id)arg1;
- (void)addProtocolFromDataString:(id)arg1;
- (id)_primaryAccount;
- (id)_cookies;
- (id)_availableSharingServices;
- (id)_accounts;
- (id)getProperty:(id)arg1;
- (id)_sysctlNumberForMIBName:(int *)arg1 length:(unsigned int)arg2;
- (id)_sysctlStringForMIBName:(int *)arg1 length:(unsigned int)arg2;
- (void)accountStore:(id)arg1 primaryAccountChanged:(id)arg2;
- (void)_handleAppIsFrontmostChangedNotification:(id)arg1;
- (void)dispatchGlobalEvent:(id)arg1 withObject:(id)arg2;
- (void)dispatchEvent:(id)arg1 withObject:(id)arg2;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 storeClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

