//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CertificateUtilities : NSObject
{
}

+ (id)extendedValidationOrganizationNameForServerTrust:(struct __SecTrust *)arg1;
+ (BOOL)isRevocationServerMetaError:(int)arg1;
+ (RetainPtr_3b882a02)ocspPolicyWithOptions:(unsigned int)arg1;
+ (BOOL)hasClientCertificateIdentityForProtectionSpace:(const struct ProtectionSpace *)arg1;
+ (_Bool)trustIncludesRevokedCertificate:(struct __SecTrust *)arg1;
+ (BOOL)isCertificateChain:(id)arg1 trustedForHost:(id)arg2;
+ (RetainPtr_b11cdf8e)trustReferenceWithCertificates:(id)arg1 forPolicy:(struct OpaqueSecPolicyRef *)arg2;
+ (RetainPtr_3b882a02)sslPolicyForHost:(id)arg1 client:(BOOL)arg2;
+ (id)labelForCertificates:(id)arg1;
+ (id)subjectFullLocationForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)subjectNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)issuerOrganizationNameForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)identitiesWithProtectionSpace:(const struct ProtectionSpace *)arg1;

@end

