//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACFMessage.h>

@class NSNumber;

@interface ACMMessage : ACFMessage
{
}

@property(retain, nonatomic) NSNumber *certificateDuration;
- (void)setShouldForceTwoStepVerify:(BOOL)arg1;
- (BOOL)shouldForceTwoStepVerify;
- (void)setForceAppModal:(BOOL)arg1;
- (BOOL)forceAppModal;
- (void)setLogoImage:(id)arg1;
- (id)logoImage;
- (void)setSignInDialogDescription:(id)arg1;
- (id)signInDialogDescription;
- (void)setSignInDialogTitle:(id)arg1;
- (id)signInDialogTitle;
- (void)setGeneratedWithTouchID:(BOOL)arg1;
- (BOOL)generatedWithTouchID;
- (void)setCanUseTouchID:(BOOL)arg1;
- (BOOL)canUseTouchID;
- (void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1;
- (BOOL)automaticallyCancelWhenSwitchingToBackground;
- (void)setAlertViewPrompt:(id)arg1;
- (id)alertViewPrompt;
- (void)setUserNameFieldEditable:(BOOL)arg1;
- (BOOL)userNameFieldEditable;
- (void)setUseAlertView:(BOOL)arg1;
- (BOOL)useAlertView;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setRawResponseData:(id)arg1;
- (id)rawResponseData;
- (void)setToken:(id)arg1;
- (id)token;
- (void)setLavaFailoverAuthenticateAPIAddress:(id)arg1;
- (id)lavaFailoverAuthenticateAPIAddress;
- (void)setLavaFailoverRetrieveSaltAPIAddress:(id)arg1;
- (id)lavaFailoverRetrieveSaltAPIAddress;
- (void)setLavaForceUseFailoverServerAddress:(BOOL)arg1;
- (BOOL)lavaForceUseFailoverServerAddress;
- (void)setManagerSignInPromptString:(id)arg1;
- (id)managerSignInPromptString;
- (void)setIdleExpirationTimeout:(id)arg1;
- (id)idleExpirationTimeout;
- (void)setDisableSingleSignOn:(BOOL)arg1;
- (BOOL)disableSingleSignOn;
- (void)setCancelAllowed:(BOOL)arg1;
- (BOOL)cancelAllowed;
- (void)setManagerSignIn:(BOOL)arg1;
- (BOOL)managerSignIn;
- (void)setDoNotSaveHSASessionInKeychain:(BOOL)arg1;
- (BOOL)doNotSaveHSASessionInKeychain;
- (void)setIgnoreHSASessionInKeychain:(BOOL)arg1;
- (BOOL)ignoreHSASessionInKeychain;
- (void)setIsInApp2SVEnabledOption:(BOOL)arg1;
- (BOOL)isInApp2SVEnabledOption;
- (void)setUser2SVEnrolled:(id)arg1;
- (id)user2SVEnrolled;
- (void)setApp2SVRequired:(id)arg1;
- (id)app2SVRequired;
- (void)setShouldUseHSAToken:(id)arg1;
- (id)shouldUseHSAToken;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;
- (void)setServiceTicketString:(id)arg1;
- (id)serviceTicketString;
- (void)setEncryptedContentHMAC:(id)arg1;
- (id)encryptedContentHMAC;
- (void)setEncryptedContent:(id)arg1;
- (id)encryptedContent;
- (void)setPersonId:(id)arg1;
- (id)personId;
- (void)setServiceApplicationIdKey:(id)arg1;
- (id)serviceApplicationIdKey;
- (void)setServiceApplicationId:(id)arg1;
- (id)serviceApplicationId;
- (void)setServerResponseTimeout:(id)arg1;
- (id)serverResponseTimeout;
- (void)setPublicKeyVersion:(id)arg1;
- (id)publicKeyVersion;
- (void)setServiceHost:(id)arg1;
- (id)serviceHost;
- (void)setApplicationName:(id)arg1;
- (id)applicationName;
- (void)setServiceName:(id)arg1;
- (id)serviceName;
- (void)setPersonDSID:(id)arg1;
- (id)personDSID;
- (void)setPersonID:(id)arg1;
- (id)personID;
- (void)setAppIDKey:(id)arg1;
- (id)appIDKey;
- (void)setAppID:(id)arg1;
- (id)appID;
- (void)setPrincipal:(id)arg1;
- (id)principal;
- (void)setUserName:(id)arg1;
- (id)userName;
- (void)setRealm:(id)arg1;
- (id)realm;
- (void)forwardInvocation:(id)arg1;

@end

