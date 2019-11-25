//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSPrimitive.h>

@class CLCircularRegion, CLSBusinessItem, CLSLitePlacemark, NSArray, NSString;

@interface CLSPlace : CLSPrimitive
{
    NSString *_name;
    CLCircularRegion *_region;
    CLSLitePlacemark *_placemark;
    NSArray *_categories;
    CLSBusinessItem *_businessItem;
}

+ (id)placeWithPlacemark:(id)arg1;
+ (id)placeWithLocation:(id)arg1;
+ (id)placeWithBusinessItem:(id)arg1;
@property(readonly, nonatomic) CLSBusinessItem *businessItem; // @synthesize businessItem=_businessItem;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;

@end

