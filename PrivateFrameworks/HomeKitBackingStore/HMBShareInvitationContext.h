//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKUserIdentityLookupInfo, NSUUID;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding>
{
    BOOL _shouldGrantWriteAccess;
    NSUUID *_participantClientIdentifier;
    CKUserIdentityLookupInfo *_lookupInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property BOOL shouldGrantWriteAccess; // @synthesize shouldGrantWriteAccess=_shouldGrantWriteAccess;
@property(readonly, copy) NSUUID *participantClientIdentifier; // @synthesize participantClientIdentifier=_participantClientIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithParticipantClientIdentifier:(id)arg1 lookupInfo:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 cloudShareID:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 phoneNumber:(id)arg2;
- (id)initWithParticipantClientIdentifier:(id)arg1 emailAddress:(id)arg2;

@end
