//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding>
{
    int _referenceFrame;
    double _latitude;
    double _longitude;
    double _uncertainty;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocation:(id)arg1;
- (id)coordinateToString;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4;

@end

