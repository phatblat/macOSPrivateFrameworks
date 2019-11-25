//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, _CPDeviceContext;

@protocol _CPUsageSinceLookback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalEngagements;
@property(nonatomic) int activeDaysInCollectionPeriod;
@property(nonatomic) int configuredLookbackTimeInDays;
@property(retain, nonatomic) _CPDeviceContext *context;
@property(nonatomic) int totalUsagesInCollectionPeriod;
@property(nonatomic) int client;
@property(nonatomic) long long collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

