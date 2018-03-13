//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

#import "XQueryAtomicType.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface XQueryNumber : NSNumber <XQueryAtomicType>
{
    NSNumber *_number;
    long long _type;
}

+ (id)positiveIntegerWithNumber:(id)arg1;
+ (id)unsignedByteWithNumber:(id)arg1;
+ (id)unsignedShortWithNumber:(id)arg1;
+ (id)unsignedIntWithNumber:(id)arg1;
+ (id)unsignedLongWithNumber:(id)arg1;
+ (id)nonNegativeIntegerWithNumber:(id)arg1;
+ (id)byteWithNumber:(id)arg1;
+ (id)shortWithNumber:(id)arg1;
+ (id)intWithNumber:(id)arg1;
+ (id)longWithNumber:(id)arg1;
+ (id)negativeIntegerWithNumber:(id)arg1;
+ (id)nonPositiveIntegerWithNumber:(id)arg1;
+ (id)integerWithNumber:(id)arg1;
+ (id)implicitTimeZone;
+ (id)dayTimeDurationWithSeconds:(double)arg1;
+ (id)dayTimeDurationWithString:(id)arg1;
+ (id)yearMonthDurationWithMonths:(long long)arg1;
+ (id)yearMonthDurationWithString:(id)arg1;
+ (BOOL)isSpecial:(id)arg1;
+ (id)numberWithDecimal:(CDStruct_5fe7aead)arg1;
+ (id)decimalWithNumber:(id)arg1;
+ (id)doubleWithNumber:(id)arg1;
+ (id)floatWithNumber:(id)arg1;
+ (id)one;
+ (id)zero;
+ (id)nan;
+ (id)negInf;
+ (id)posInf;
+ (void)initialize;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithUnsignedInt:(unsigned long long)arg1;
+ (id)numberWithInt:(long long)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithChar:(BOOL)arg1;
- (id)XQueryStringValue;
- (id)XQueryCastAs:(long long)arg1 forContext:(id)arg2;
- (long long)XQueryTypeID;
- (void)finalize;
- (void)dealloc;
- (long long)compare:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqualToNumber:(id)arg1;
- (CDStruct_5fe7aead)decimalValue;
- (id)stringValue;
- (BOOL)boolValue;
- (double)doubleValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (BOOL)charValue;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (id)initWithNumber:(id)arg1 type:(long long)arg2;
- (void)setType:(long long)arg1;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithChar:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

