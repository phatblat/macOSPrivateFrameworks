//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBPaymentMethodValue;

@protocol _INPBPaymentMethod <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBPaymentMethodValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBPaymentMethodValue *)arg1;
- (void)clearValues;
@end

