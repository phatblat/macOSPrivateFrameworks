//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_type;
    NSDictionary *_currentPoliciesByIdentifier;
    NSDictionary *_prioritiesByIdentifier;
    long long _defaultPolicy;
    unsigned long long _defaultPriority;
}

+ (id)unblockableBundleIdentifiers;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long defaultPriority; // @synthesize defaultPriority=_defaultPriority;
@property(readonly, nonatomic) long long defaultPolicy; // @synthesize defaultPolicy=_defaultPolicy;
@property(readonly, copy, nonatomic) NSDictionary *prioritiesByIdentifier; // @synthesize prioritiesByIdentifier=_prioritiesByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *currentPoliciesByIdentifier; // @synthesize currentPoliciesByIdentifier=_currentPoliciesByIdentifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)priorityForIdentifier:(id)arg1;
- (long long)policyForIdentifier:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 defaultPolicy:(long long)arg2 currentPoliciesByIdentifier:(id)arg3 defaultPriority:(unsigned long long)arg4 prioritiesByIdentifier:(id)arg5;
- (id)_valueForMatchingHostName:(id)arg1 inRegisteredHostNames:(id)arg2;
- (unsigned long long)priorityForHostName:(id)arg1;
- (long long)policyForHostName:(id)arg1;

@end

