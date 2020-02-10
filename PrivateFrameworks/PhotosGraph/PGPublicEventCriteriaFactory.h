//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PGGraph;

@interface PGPublicEventCriteriaFactory : NSObject
{
    PGGraph *_graph;
    NSDictionary *_disambiguationCriteriaByEventCategory;
    NSDictionary *_highConfidenceCriteriaByEventCategory;
    NSDictionary *_prohibitedCriteriaByEventCategory;
}

+ (id)publicEventCriteriaByCategoryForGraph:(id)arg1;
@property(retain, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)_appleEventsCriteriaArray;
- (id)_festivalsAndFairsCriteriaArray;
- (id)_artsAndMuseumsCriteriaArray;
- (id)_nightLifeCriteriaArray;
- (id)_danceCriteriaArray;
- (id)_theaterCriteriaArray;
- (id)_musicConcertsCriteriaArray;
- (id)_sportsCriteriaArray;
- (id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg1 inferenceType:(unsigned long long)arg2;
@property(readonly, nonatomic) NSDictionary *prohibitedCriteriaByEventCategory; // @synthesize prohibitedCriteriaByEventCategory=_prohibitedCriteriaByEventCategory;
@property(readonly, nonatomic) NSDictionary *disambiguationCriteriaByEventCategory; // @synthesize disambiguationCriteriaByEventCategory=_disambiguationCriteriaByEventCategory;
@property(readonly, nonatomic) NSDictionary *highConfidenceCriteriaByEventCategory; // @synthesize highConfidenceCriteriaByEventCategory=_highConfidenceCriteriaByEventCategory;
- (id)_publicEventCriteriaByCategory;

@end
