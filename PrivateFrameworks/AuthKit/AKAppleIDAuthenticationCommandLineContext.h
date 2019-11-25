//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationContext.h>

#import "AKAppleIDServerAuthenticationUIProvider.h"

@class NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider>
{
    NSNumber *_secondFactorCode;
    long long _verificationType;
}

@property(nonatomic) long long verificationType; // @synthesize verificationType=_verificationType;
@property(copy, nonatomic) NSNumber *secondFactorCode; // @synthesize secondFactorCode=_secondFactorCode;
- (void).cxx_destruct;
- (id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2;
- (id)_jsonDictionaryForData:(id)arg1 error:(id)arg2;
- (id)_mutableJSONRequestForURL:(id)arg1;
- (id)_mutableJSONRequestForPath:(id)arg1;
- (void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_promptForVerificationCodeWithSecureEntry:(BOOL)arg1;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)arg1;
- (void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleServerUISMSSecondFactorWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_capabilityForUIDisplay;
- (id)initWithVerificationType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

