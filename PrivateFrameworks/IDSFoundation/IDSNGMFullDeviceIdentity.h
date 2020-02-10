//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDSNGMFullDeviceIdentity : NSObject
{
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;
- (id)keyRollingTicketWithError:(id *)arg1;
- (BOOL)shouldRollEncryptionIdentity;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (BOOL)eraseFromKeyChain:(id *)arg1;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (id)dataRepresentationWithError:(id *)arg1;

@end
