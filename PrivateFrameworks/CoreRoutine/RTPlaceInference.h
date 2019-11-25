//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, RTLocation, RTMapItem;

@interface RTPlaceInference : NSObject <NSSecureCoding>
{
    RTLocation *_referenceLocation;
    RTMapItem *_mapItem;
    unsigned long long _userType;
    unsigned long long _placeType;
    double _confidence;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) RTLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (void).cxx_destruct;
- (id)description;
- (id)nameFromUserType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *preferredName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 placeType:(unsigned long long)arg3 referenceLocation:(id)arg4 confidence:(double)arg5;
- (id)init;

@end

