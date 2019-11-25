//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTApplicationPublicKeyStore, KTContextVerifier, KTLogClient, NSString, TransparencyManagedDataStore, TransparencyTranscript;

@interface KTContext : NSObject
{
    NSString *_applicationID;
    TransparencyTranscript *_transcript;
    KTApplicationPublicKeyStore *_applicationKeyStore;
    TransparencyManagedDataStore *_dataStore;
    KTLogClient *_logClient;
    KTContextVerifier *_verifier;
}

@property(retain) KTContextVerifier *verifier; // @synthesize verifier=_verifier;
@property(retain) KTLogClient *logClient; // @synthesize logClient=_logClient;
@property(retain) TransparencyManagedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain) KTApplicationPublicKeyStore *applicationKeyStore; // @synthesize applicationKeyStore=_applicationKeyStore;
@property(retain) TransparencyTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (void).cxx_destruct;
- (id)copyState;
- (BOOL)runDutyCycleForActivity:(id)arg1;
- (BOOL)checkDeferActivity:(id)arg1;
- (void)handleGarbageCollection:(id)arg1 error:(id *)arg2;
- (void)handleSMTsWithUnverifiedSignature:(id *)arg1;
- (void)handleURIsWithPendingSMTs:(id)arg1 error:(id *)arg2;
- (void)handlePendingQueryRequests:(id)arg1 error:(id *)arg2;
- (unsigned long long)handleKTRequest:(id)arg1 queryResponse:(id)arg2 error:(id *)arg3;
- (void)validateKTSMTsMerged:(id)arg1 uri:(id)arg2 uuid:(id)arg3 accountId:(id)arg4;
- (void)clearState:(CDUnknownBlockType)arg1;
- (unsigned long long)validateEnrollmentWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateEnrollment:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateEnrollment:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (id)analyticsForRequestValidation:(id)arg1 initialResult:(unsigned long long)arg2 result:(unsigned long long)arg3;
- (unsigned long long)handleVerifyInsertResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)writeFailureForRequest:(id)arg1 proof:(id)arg2 error:(id *)arg3;
- (unsigned long long)validateSelfWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateSelf:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validateSelf:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)handleVerifySelfResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)validatePeerWithAnalytics:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validatePeer:(id)arg1 transparentData:(id *)arg2 error:(id *)arg3;
- (unsigned long long)validatePeer:(id)arg1 queryResponse:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (void)fetchQueryForKTRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)handleVerifyPeerResponse:(id)arg1 request:(id)arg2 transparentData:(id *)arg3 error:(id *)arg4;
- (unsigned long long)verifyDeviceWitnesses:(id)arg1 request:(id)arg2 loggableDatas:(id)arg3 uriVRFOutput:(id)arg4 error:(id *)arg5;
- (BOOL)ready:(id *)arg1;
- (void)logFinishFailureEvent:(id)arg1 error:(id)arg2;
- (void)logFinishSuccessEvent:(id)arg1;
- (void)logStartEvent:(id)arg1;
- (id)initWithApplicationKeyStore:(id)arg1 dataStore:(id)arg2 logClient:(id)arg3 applicationID:(id)arg4;

@end

