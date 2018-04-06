//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountPolicy/APPolicy.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface APPolicyAccountExpiresOnDate : APPolicy <NSCopying, NSSecureCoding>
{
    NSDate *_expiresOnDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithIdentifier:(id)arg1 andDate:(id)arg2;
+ (id)policyWithDate:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSDate *expiresOnDate; // @synthesize expiresOnDate=_expiresOnDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 andDate:(id)arg2;
- (id)initWithDate:(id)arg1;

@end
