//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;
+ (id)handleWithPersonHandle:(id)arg1;
+ (id)stringForType:(long long)arg1;
+ (id)handleWithDictionaryRepresentation:(id)arg1;
+ (id)handleWithDestinationID:(id)arg1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (BOOL)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2;
- (id)canonicalHandleForISOCountryCode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)personHandle;
- (id)description;
- (id)init;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithDestinationID:(id)arg1;

@end

