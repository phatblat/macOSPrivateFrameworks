//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface RDPlaceAnnotation : NSObject <NSCopying>
{
    NSNumber *_placeLevel;
    NSString *_placeName;
}

@property(retain, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(retain, nonatomic) NSNumber *placeLevel; // @synthesize placeLevel=_placeLevel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToPlaceAnnotation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *placeLevelAsString;
- (id)description;
- (id)initWithPlaceLevel:(id)arg1 placeName:(id)arg2;
- (id)initWithData:(id)arg1;

@end

