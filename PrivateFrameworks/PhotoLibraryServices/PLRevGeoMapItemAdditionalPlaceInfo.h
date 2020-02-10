//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber, NSString;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSNumber *_placeType;
    unsigned long long _dominantOrderType;
    double _areaInSquareMeters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double areaInSquareMeters; // @synthesize areaInSquareMeters=_areaInSquareMeters;
@property(readonly, nonatomic) unsigned long long dominantOrderType; // @synthesize dominantOrderType=_dominantOrderType;
@property(readonly, copy, nonatomic) NSNumber *placeType; // @synthesize placeType=_placeType;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4;

@end
