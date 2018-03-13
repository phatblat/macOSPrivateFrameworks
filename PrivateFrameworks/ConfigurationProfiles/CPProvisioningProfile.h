//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface CPProvisioningProfile : NSObject <NSSecureCoding>
{
    NSMutableDictionary *fProfileDict;
    _Bool fVerificationStateCalculated;
    int fVerificationState;
    unsigned long long fIndexOfFailedVerificationSigner;
    NSString *fSignerName;
}

+ (BOOL)supportsSecureCoding;
+ (id)profileFromDict:(id)arg1;
@property(readonly, retain, nonatomic) NSString *signerName;
@property(readonly, retain, nonatomic) NSArray *signerCertificatesInfo;
@property(readonly, retain, nonatomic) NSData *firstInvalidSignerCertificateData;
@property(readonly, nonatomic) int verificationState;
@property(readonly, retain, nonatomic) NSDate *receiveDate;
@property(readonly, retain, nonatomic) NSDate *installationDate;
@property(readonly, nonatomic) _Bool hasExpired;
@property(readonly, retain, nonatomic) NSDate *expirationDate;
@property(readonly, retain, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) _Bool provisionedForAllDevices;
@property(readonly, retain, nonatomic) NSArray *teamIdentifier;
@property(readonly, retain, nonatomic) NSString *teamName;
@property(readonly, retain, nonatomic) NSString *appName;
@property(readonly, retain, nonatomic) NSArray *developerCertificates;
@property(readonly, retain, nonatomic) NSDictionary *entitlements;
@property(readonly, retain, nonatomic) NSArray *provisionedDevices;
@property(readonly, retain, nonatomic) NSString *applicationID;
@property(readonly, retain, nonatomic) NSString *uuid;
@property(readonly, retain, nonatomic) NSString *name;
- (void)setUserData:(id)arg1 forKey:(id)arg2;
- (id)userDataForKey:(id)arg1;
- (id)userData;
- (id)settings;
- (id)profileDict;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initFromDict:(id)arg1;

@end

