//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBPriceRangeValue, _INPBRangeValue;

@protocol _INPBRidePartySizeOption <NSObject>
@property(readonly, nonatomic) BOOL hasSizeDescription;
@property(copy, nonatomic) NSString *sizeDescription;
@property(readonly, nonatomic) BOOL hasPriceRange;
@property(retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property(readonly, nonatomic) BOOL hasPartySizeRange;
@property(retain, nonatomic) _INPBRangeValue *partySizeRange;
@end
