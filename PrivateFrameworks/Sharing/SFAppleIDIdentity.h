//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDate, NSString;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding>
{
    NSString *_encDSID;
    BOOL _linkedToCurrentUser;
    NSString *_altDSID;
    NSString *_appleID;
    NSDate *_certificateExpirationDate;
    NSData *_certificatePersistentReference;
    NSData *_intermediateCertificatePersistentReference;
    NSDate *_lastValidationAttemptDate;
    NSDate *_lastValidationDate;
    NSDate *_modificationDate;
    NSData *_privateKeyPersistentReference;
    NSString *_serialNumber;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) BOOL linkedToCurrentUser; // @synthesize linkedToCurrentUser=_linkedToCurrentUser;
@property(retain, nonatomic) NSDate *lastValidationDate; // @synthesize lastValidationDate=_lastValidationDate;
@property(retain, nonatomic) NSDate *lastValidationAttemptDate; // @synthesize lastValidationAttemptDate=_lastValidationAttemptDate;
@property(retain, nonatomic) NSData *intermediateCertificatePersistentReference; // @synthesize intermediateCertificatePersistentReference=_intermediateCertificatePersistentReference;
@property(retain, nonatomic) NSData *certificatePersistentReference; // @synthesize certificatePersistentReference=_certificatePersistentReference;
@property(retain, nonatomic) NSDate *certificateExpirationDate; // @synthesize certificateExpirationDate=_certificateExpirationDate;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (void).cxx_destruct;
- (void)removeFromKeychain;
- (struct OpaqueSecIdentityRef *)copyIdentity;
@property(readonly, nonatomic) BOOL needsRenewal;
@property(readonly, nonatomic) BOOL certificateExpired;
- (struct OpaqueSecKeyRef *)copyPrivateKey;
- (struct OpaqueSecCertificateRef *)copyIntermediateCertificate;
- (struct OpaqueSecCertificateRef *)copyCertificateWithType:(long long)arg1;
- (struct OpaqueSecCertificateRef *)copyCertificate;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (BOOL)isEqualToIdentity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
