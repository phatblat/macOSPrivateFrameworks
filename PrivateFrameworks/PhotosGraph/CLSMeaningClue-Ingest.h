//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSMeaningClue.h"

#import "PGGraphIngestPlace.h"
#import "PGGraphIngestScene.h"

@class NSString;

@interface CLSMeaningClue (Ingest) <PGGraphIngestScene, PGGraphIngestPlace>
@property(readonly, nonatomic) NSString *placeInterestType;
@property(readonly, nonatomic) BOOL isReliable;
@property(readonly, nonatomic) unsigned long long numberOfSearchConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfAssets;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, nonatomic) double confidence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double relevance;
@property(readonly) Class superclass;
@end

