//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface CNAuthorizationContext : NSObject
{
    NSNumber *_number_isFirstParty;
    BOOL _hasAuditToken;
    Class _entitlementVerifierClass;
    CDStruct_4c969caf _auditToken;
}

@property(readonly) Class entitlementVerifierClass; // @synthesize entitlementVerifierClass=_entitlementVerifierClass;
@property(readonly) BOOL hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
@property(readonly) BOOL isValidatingFirstPartyClient;
- (struct NSNumber *)_isFirstParty;
- (id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(BOOL)arg2;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end

