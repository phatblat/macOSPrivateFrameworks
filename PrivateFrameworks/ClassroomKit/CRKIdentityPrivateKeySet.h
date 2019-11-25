//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface CRKIdentityPrivateKeySet : NSObject <NSSecureCoding>
{
    NSData *_activeIdentityPrivateKeyData;
    NSData *_stagedIdentityPrivateKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *stagedIdentityPrivateKeyData; // @synthesize stagedIdentityPrivateKeyData=_stagedIdentityPrivateKeyData;
@property(readonly, copy, nonatomic) NSData *activeIdentityPrivateKeyData; // @synthesize activeIdentityPrivateKeyData=_activeIdentityPrivateKeyData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActiveIdentityPrivateKeyData:(id)arg1 stagedIdentityPrivateKeyData:(id)arg2;

@end

