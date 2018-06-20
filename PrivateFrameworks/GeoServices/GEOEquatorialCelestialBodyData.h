//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOEquatorialCelestialBodyData : NSObject
{
    double _rightAscension;
    double _declination;
}

@property(readonly, nonatomic) double declination; // @synthesize declination=_declination;
@property(readonly, nonatomic) double rightAscension; // @synthesize rightAscension=_rightAscension;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;
- (id)initWithJulianDay:(double)arg1 body:(long long)arg2;
- (id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3;
- (id)initWithDate:(id)arg1 body:(long long)arg2;

@end

