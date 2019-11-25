//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AKCircleRequestContext, CUMessageSession, KCAESGCMDuplexSession, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CDPContext : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableArray *_signInMetricsStack;
    BOOL _isHSA2Account;
    BOOL _isFederatedAccount;
    BOOL _didUseSMSVerification;
    BOOL _guestMode;
    BOOL _supportsSkipSignIn;
    BOOL __useSecureBackupCachedPassphrase;
    BOOL __alwaysCreateEscrowRecord;
    BOOL __ignoreLockAssertErrors;
    BOOL _idmsRecovery;
    BOOL _idmsMasterKeyRecovery;
    NSDictionary *_authenticationResults;
    NSString *_appleID;
    NSString *_password;
    NSString *_passwordEquivToken;
    NSNumber *_dsid;
    NSString *_altDSID;
    long long _type;
    NSString *_cachedLocalSecret;
    unsigned long long _cachedLocalSecretType;
    NSString *_findMyiPhoneUUID;
    id <CDPAuthProviderInternal> __authProvider;
    KCAESGCMDuplexSession *_duplexSession;
    AKCircleRequestContext *_resumeContext;
    CUMessageSession *_sharingChannel;
    NSString *__recoveryToken;
}

+ (BOOL)supportsSecureCoding;
+ (id)_metricsQueue;
+ (id)preflightContext:(id)arg1;
@property(nonatomic) BOOL idmsMasterKeyRecovery; // @synthesize idmsMasterKeyRecovery=_idmsMasterKeyRecovery;
@property(nonatomic) BOOL idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(nonatomic) BOOL _ignoreLockAssertErrors; // @synthesize _ignoreLockAssertErrors=__ignoreLockAssertErrors;
@property(copy, nonatomic) NSString *_recoveryToken; // @synthesize _recoveryToken=__recoveryToken;
@property(nonatomic) BOOL _alwaysCreateEscrowRecord; // @synthesize _alwaysCreateEscrowRecord=__alwaysCreateEscrowRecord;
@property(nonatomic) BOOL _useSecureBackupCachedPassphrase; // @synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase;
@property(retain, nonatomic) CUMessageSession *sharingChannel; // @synthesize sharingChannel=_sharingChannel;
@property(retain, nonatomic) AKCircleRequestContext *resumeContext; // @synthesize resumeContext=_resumeContext;
@property(retain, nonatomic) KCAESGCMDuplexSession *duplexSession; // @synthesize duplexSession=_duplexSession;
@property(retain, nonatomic) id <CDPAuthProviderInternal> _authProvider; // @synthesize _authProvider=__authProvider;
@property BOOL supportsSkipSignIn; // @synthesize supportsSkipSignIn=_supportsSkipSignIn;
@property(copy) NSString *findMyiPhoneUUID; // @synthesize findMyiPhoneUUID=_findMyiPhoneUUID;
@property(nonatomic) BOOL guestMode; // @synthesize guestMode=_guestMode;
@property(nonatomic) unsigned long long cachedLocalSecretType; // @synthesize cachedLocalSecretType=_cachedLocalSecretType;
@property(copy, nonatomic) NSString *cachedLocalSecret; // @synthesize cachedLocalSecret=_cachedLocalSecret;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) BOOL didUseSMSVerification; // @synthesize didUseSMSVerification=_didUseSMSVerification;
@property(nonatomic) BOOL isFederatedAccount; // @synthesize isFederatedAccount=_isFederatedAccount;
@property(nonatomic) BOOL isHSA2Account; // @synthesize isHSA2Account=_isHSA2Account;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *passwordEquivToken; // @synthesize passwordEquivToken=_passwordEquivToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
- (void).cxx_destruct;
- (id)cliqueConfiguration;
- (struct __CFData *)encodedTopLevelMetric;
- (id)topLevelMetric;
- (void)stopMetric:(id)arg1 withAttributes:(id)arg2;
- (id)startMetricForEventName:(id)arg1;
- (void)augmentWithCredentialsFromContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithAuthenticationResults:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)desiresAllRecords;
- (void)purgeResumeData;
- (id)initWithAuthenticationResults:(id)arg1;
- (id)init;

@end

