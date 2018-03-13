//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherLocation;

@interface SAWeatherAirQualityObject : SADomainObject
{
}

+ (id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)airQualityObject;
@property(copy, nonatomic) NSArray *pollutants;
@property(copy, nonatomic) NSString *localizedCategoryName;
@property(copy, nonatomic) NSString *airQualityRatingCategory;
@property(retain, nonatomic) SAWeatherLocation *airQualityLocation;
@property(nonatomic) long long airQualityIndex;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

