//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol _CPSearchResultForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasIsFuzzyMatch;
@property(nonatomic) BOOL isFuzzyMatch;
@property(readonly, nonatomic) BOOL hasUserInput;
@property(copy, nonatomic) NSString *userInput;
@property(readonly, nonatomic) BOOL hasFbr;
@property(copy, nonatomic) NSString *fbr;
@property(readonly, nonatomic) BOOL hasPubliclyIndexable;
@property(nonatomic) BOOL publiclyIndexable;
@property(readonly, nonatomic) BOOL hasIsLocalApplicationResult;
@property(nonatomic) BOOL isLocalApplicationResult;
@property(readonly, nonatomic) BOOL hasCompletedQuery;
@property(copy, nonatomic) NSString *completedQuery;
@property(readonly, nonatomic) BOOL hasCorrectedQuery;
@property(copy, nonatomic) NSString *correctedQuery;
@property(readonly, nonatomic) BOOL hasIntendedQuery;
@property(copy, nonatomic) NSString *intendedQuery;
@property(readonly, nonatomic) BOOL hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) BOOL hasIsStaticCorrection;
@property(nonatomic) BOOL isStaticCorrection;
@property(readonly, nonatomic) BOOL hasRankingScore;
@property(nonatomic) double rankingScore;
@property(readonly, nonatomic) BOOL hasResultType;
@property(copy, nonatomic) NSString *resultType;
@property(readonly, nonatomic) BOOL hasSectionBundleIdentifier;
@property(copy, nonatomic) NSString *sectionBundleIdentifier;
@property(readonly, nonatomic) BOOL hasApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) BOOL hasResultBundleId;
@property(copy, nonatomic) NSString *resultBundleId;
@property(readonly, nonatomic) BOOL hasLocalFeatures;
@property(retain, nonatomic) _CPStruct *localFeatures;
@property(readonly, nonatomic) BOOL hasSrf;
@property(copy, nonatomic) NSString *srf;
@property(readonly, nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasPunchout;
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property(readonly, nonatomic) BOOL hasAction;
@property(retain, nonatomic) _CPActionItemForFeedback *action;
@property(readonly, nonatomic) BOOL hasTopHit;
@property(nonatomic) int topHit;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

