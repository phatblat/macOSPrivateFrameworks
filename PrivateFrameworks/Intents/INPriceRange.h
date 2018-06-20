//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INPriceRangeExport.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_minimumPrice;
    NSDecimalNumber *_maximumPrice;
    NSString *_currencyCode;
}

+ (BOOL)supportsSecureCoding;
+ (id)_priceWithPriceRangeValue:(id)arg1;
@property(readonly) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly) NSDecimalNumber *maximumPrice; // @synthesize maximumPrice=_maximumPrice;
@property(readonly) NSDecimalNumber *minimumPrice; // @synthesize minimumPrice=_minimumPrice;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

