//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENAccountKey.h"

@class IDSMPFullAccountIdentity, IDSMPFullAccountIdentityCluster, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject <ENAccountKey>
{
    IDSMPFullAccountIdentityCluster *_identityCluster;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) IDSMPFullAccountIdentityCluster *identityCluster; // @synthesize identityCluster=_identityCluster;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) IDSMPFullServiceIdentitySigning *signingIdentity;
@property(readonly, nonatomic) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property(readonly, nonatomic) IDSMPFullAccountIdentity *accountIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) IDSPublicAccountIdentity *accountPublicKey;
- (id)initWithFullCluster:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

