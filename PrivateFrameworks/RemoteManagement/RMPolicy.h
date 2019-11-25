//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, RMConfiguration;

@interface RMPolicy : NSObject <NSSecureCoding>
{
    RMConfiguration *_configuration;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyKeyForConfiguration:(id)arg1;
@property(retain, nonatomic) RMConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToPolicy:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *policyKey;
- (id)initWithConfiguration:(id)arg1;

@end

