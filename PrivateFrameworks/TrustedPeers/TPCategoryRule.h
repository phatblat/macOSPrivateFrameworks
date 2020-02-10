//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>
{
    NSString *_prefix;
    NSString *_category;
}

+ (BOOL)supportsSecureCoding;
+ (id)ruleWithPrefix:(id)arg1 category:(id)arg2;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCategoryRule:(id)arg1;

@end
