//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GEORouteIncident;

@interface MNRouteIncident : NSObject <NSSecureCoding>
{
    GEORouteIncident *_geoRouteIncident;
    double _offsetInMeters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double offsetInMeters; // @synthesize offsetInMeters=_offsetInMeters;
@property(readonly, nonatomic) GEORouteIncident *geoRouteIncident; // @synthesize geoRouteIncident=_geoRouteIncident;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoRouteIncident:(id)arg1 offsetInMeters:(double)arg2;

@end
