//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import "NFAppletCollection.h"
#import "NFSecureElementManagerSessionCallbacks.h"

@class NSMutableDictionary, NSString;

@interface NFSecureElementManagerSession : NFSession <NFSecureElementManagerSessionCallbacks, NFAppletCollection>
{
    BOOL _hasApplets;
    NSMutableDictionary *_appletsById;
}

- (id)getOSUpdateLog;
- (BOOL)powerCycleSEID:(id)arg1 error:(id *)arg2;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2;
- (id)getAttackCounterLogForSEID:(id)arg1 error:(id *)arg2;
- (id)getAttackCounterLogForSEID:(id)arg1;
- (BOOL)refreshSecureElement:(id)arg1 error:(id *)arg2;
- (BOOL)refreshSecureElement:(id)arg1;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 outputResults:(id *)arg3;
- (unsigned int)runScript:(id)arg1 forSEID:(id)arg2 results:(id *)arg3 lastStatus:(unsigned long long *)arg4;
- (id)transceiveMultiple:(id)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (id)transceive:(id)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (BOOL)didExitRestrictedMode:(id)arg1 error:(id *)arg2;
- (void)didExitRestrictedMode:(id)arg1;
- (id)performPeerPaymentEnrollment:(id)arg1 error:(id *)arg2;
- (id)expressAppletIdentifiersWithError:(id *)arg1;
- (id)expressAppletIdentifiers;
- (BOOL)expressModesEnabledWithError:(id *)arg1;
- (BOOL)expressModesEnabled;
- (id)transitAppletState:(id)arg1 error:(id *)arg2;
- (id)felicaAppletState:(id)arg1 error:(id *)arg2;
- (id)felicaAppletState:(id)arg1;
- (BOOL)disableAuthorizationForApplet:(id)arg1 andKeys:(id)arg2 authorization:(id)arg3 error:(id *)arg4;
- (BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (BOOL)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id *)arg2;
- (BOOL)restoreAuthorizationForAllAppletsExcept:(id)arg1;
- (id)getExpressConfigWithError:(id *)arg1;
- (BOOL)setExpressConfig:(id)arg1 restoreAuthorization:(BOOL)arg2 error:(id *)arg3;
- (BOOL)setExpressConfig:(id)arg1 error:(id *)arg2;
- (id)checkExpressAppletCompatibility:(id)arg1 error:(id *)arg2;
- (BOOL)setExpressModesEnabled:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setExpressModesEnabled:(BOOL)arg1;
- (BOOL)removeExpressKeyID:(id)arg1 forApplet:(id)arg2 restoreAuthorization:(BOOL)arg3 error:(id *)arg4;
- (BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3 error:(id *)arg4;
- (BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(BOOL)arg3;
- (BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)removeExpressApplet:(id)arg1 type:(unsigned char)arg2;
- (BOOL)addExpressKeyID:(id)arg1 forApplet:(id)arg2 type:(unsigned char)arg3 authorization:(id)arg4 expressInfo:(id)arg5 error:(id *)arg6;
- (BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 expressInfo:(id)arg4 error:(id *)arg5;
- (BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id *)arg4;
- (BOOL)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3;
- (BOOL)getCryptogram:(id *)arg1 challengeResponse:(id *)arg2 error:(id *)arg3;
- (BOOL)getCryptogram:(id *)arg1 challengeResponse:(id *)arg2;
- (unsigned int)validateSEPairings:(id *)arg1;
- (BOOL)deleteAllApplets:(BOOL)arg1 error:(id *)arg2;
- (BOOL)deleteAllApplets:(BOOL)arg1;
- (BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2 error:(id *)arg3;
- (BOOL)deleteApplets:(id)arg1 queueServerConnection:(BOOL)arg2;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
- (id)getSignedPlatformDataForSeid:(id)arg1 error:(id *)arg2;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id *)arg3 error:(id *)arg4;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id *)arg3 error:(id *)arg4;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id *)arg3;
- (id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id *)arg3 error:(id *)arg4;
- (id)signChallenge:(id)arg1 useOSVersion:(BOOL)arg2 signatureInfo:(id *)arg3;
- (id)signChallenge:(id)arg1 certs:(id *)arg2 error:(id *)arg3;
- (id)signChallenge:(id)arg1 certs:(id *)arg2;
- (id)stateInformationWithError:(id *)arg1;
- (id)stateInformation;
- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

