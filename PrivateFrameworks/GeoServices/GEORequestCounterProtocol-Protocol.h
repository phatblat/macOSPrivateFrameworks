//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@protocol GEORequestCounterProtocol <NSObject>
@property(nonatomic) BOOL countersEnabled;
- (void)readCDSDiagnosticsSince:(NSDate *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)finishedCDSStaleTileUpdateForID:(NSString *)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5;
- (void)startedCDSStaleTileUpdateForID:(NSString *)arg1;
- (void)finishedCDSDownloadForRegionId:(NSString *)arg1;
- (void)finishedCDSDownloadForTileSet:(NSString *)arg1 zoom:(unsigned char)arg2 tilesAtZoom:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 forCDSRegionId:(NSString *)arg7;
- (void)startedCDSDownloadForTileSet:(NSString *)arg1 zoom:(unsigned char)arg2 forCDSRegionId:(NSString *)arg3;
- (void)receivedCDSRegions:(NSArray *)arg1 forCDSRegionId:(NSString *)arg2;
- (void)fetchTrafficProbeCollectionsStartingFrom:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)readRequestLogsSince:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (id <GEORequestCounterTicket>)requestCounterTicketForType:(unsigned char)arg1 appId:(NSString *)arg2;
@end

