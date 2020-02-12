//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding>
{
    void *_TLSIdentityHandle;
    NSString *_username;
    NSString *_password;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEAPCredentials:(id)arg1;
@property(copy, nonatomic) const void *TLSIdentityHandle; // @dynamic TLSIdentityHandle;
@property(copy, nonatomic) struct __SecIdentity *TLSIdentity; // @dynamic TLSIdentity;
- (void)dealloc;

@end
