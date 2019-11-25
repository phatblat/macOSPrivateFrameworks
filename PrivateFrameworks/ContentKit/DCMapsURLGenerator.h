//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/DCURLGenerator.h>

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator : DCURLGenerator
{
    NSMutableDictionary *_queryDictionary;
    DCMapsLink *_mapsLink;
}

+ (id)URLWithMapsLink:(id)arg1;
@property(readonly, nonatomic) DCMapsLink *mapsLink; // @synthesize mapsLink=_mapsLink;
- (void).cxx_destruct;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;
- (id)mapType;
- (id)directionsMode;
- (void)populateQueryDictionary;
@property(readonly, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
- (id)URL;
- (id)query;
- (id)path;
- (id)host;
- (id)scheme;
- (id)initWithMapsLink:(id)arg1;

@end

