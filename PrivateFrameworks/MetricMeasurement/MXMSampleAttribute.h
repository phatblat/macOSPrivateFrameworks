//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    long long _valueType;
    id _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)attributeWithName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
+ (id)attributeWithName:(id)arg1 valueType:(long long)arg2;
+ (id)attributeWithName:(id)arg1 numericValue:(id)arg2;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)attributeWithName:(id)arg1;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToAttribute:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2;
- (id)initWithAttributeName:(id)arg1 stringValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 numericValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *numericValue;
@property(readonly, copy, nonatomic) NSString *stringValue;

@end

