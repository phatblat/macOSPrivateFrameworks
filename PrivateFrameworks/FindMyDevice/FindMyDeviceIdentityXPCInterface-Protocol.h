//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDIdentitySigningRequest, NSDictionary;

@protocol FindMyDeviceIdentityXPCInterface <NSObject>
- (oneway void)attestIdentityForSigningRequest:(FMDIdentitySigningRequest *)arg1 type:(unsigned long long)arg2 completion:(void (^)(NSObject<FMDIdentityAttesting> *, NSError *))arg3;
- (oneway void)identityForPasscodeActivationUnlockWithContext:(NSDictionary *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

