//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RMKeychainAccess : NSObject
{
}

+ (id)getIdentityPublicCertificateData:(struct OpaqueSecIdentityRef *)arg1;
+ (id)getIdentityExpirationDate:(struct OpaqueSecIdentityRef *)arg1;
+ (id)getCertificateExpirationDate:(struct OpaqueSecCertificateRef *)arg1;
+ (struct OpaqueSecIdentityRef *)createIdentityWithCommonName:(id)arg1 error:(id *)arg2;
+ (id)getCommonNamesForCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (struct OpaqueSecCertificateRef *)getLeafCertificateForTrust:(struct __SecTrust *)arg1;
+ (BOOL)itemExistsInKeychain:(void *)arg1;
+ (id)getCertificatesWithPersistentIDs:(id)arg1;
+ (struct OpaqueSecIdentityRef *)copyIdentityWithPersistentID:(id)arg1;
+ (struct OpaqueSecCertificateRef *)copyCertificateWithPersistentID:(id)arg1;
+ (const void *)copyItemWithPersistentID:(id)arg1;
+ (BOOL)removeItemWithPersistentID:(id)arg1;
+ (id)addItem:(void *)arg1 toGroup:(id)arg2;

@end

