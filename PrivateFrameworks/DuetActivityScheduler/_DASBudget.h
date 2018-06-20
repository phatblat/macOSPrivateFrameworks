//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _allocationType;
    NSString *_name;
    double _capacity;
    double _balance;
    CDUnknownBlockType _callback;
    double _maxBudgetValue;
    double _minBudgetValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;
@property(nonatomic) double minBudgetValue; // @synthesize minBudgetValue=_minBudgetValue;
@property(nonatomic) double maxBudgetValue; // @synthesize maxBudgetValue=_maxBudgetValue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) double balance; // @synthesize balance=_balance;
@property(readonly, nonatomic) unsigned char allocationType; // @synthesize allocationType=_allocationType;
@property(readonly, nonatomic) double capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBalance:(double)arg1;
- (void)incrementBy:(double)arg1;
- (void)decrementBy:(double)arg1;
- (BOOL)isPositive;
- (void)registerSignificantBudgetChangeCallback:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;

@end

