//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying>
{
    CDStruct_95bda58d _networkEvents;
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _timeToNetworkEventsMsecs;
    unsigned long long _fallbackTimerMsecs;
    NSMutableArray *_dataUsageSnapshotsAtNetworkEvents;
    int _denyReason;
    NSMutableArray *_primaryInterfaceAttemptStatisticsReports;
    BOOL _fellback;
    struct {
        unsigned int fallbackTimerMsecs:1;
        unsigned int denyReason:1;
        unsigned int fellback:1;
    } _has;
}

+ (Class)dataUsageSnapshotsAtNetworkEventsType;
+ (Class)primaryInterfaceAttemptStatisticsReportsType;
@property(retain, nonatomic) NSMutableArray *dataUsageSnapshotsAtNetworkEvents; // @synthesize dataUsageSnapshotsAtNetworkEvents=_dataUsageSnapshotsAtNetworkEvents;
@property(retain, nonatomic) NSMutableArray *primaryInterfaceAttemptStatisticsReports; // @synthesize primaryInterfaceAttemptStatisticsReports=_primaryInterfaceAttemptStatisticsReports;
@property(nonatomic) unsigned long long fallbackTimerMsecs; // @synthesize fallbackTimerMsecs=_fallbackTimerMsecs;
@property(nonatomic) BOOL fellback; // @synthesize fellback=_fellback;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
- (void)addDataUsageSnapshotsAtNetworkEvents:(id)arg1;
- (void)clearDataUsageSnapshotsAtNetworkEvents;
- (id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
- (void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg1;
- (void)clearPrimaryInterfaceAttemptStatisticsReports;
- (void)setTimeToNetworkEventsMsecs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)arg1;
- (void)addTimeToNetworkEventsMsecs:(unsigned long long)arg1;
- (void)clearTimeToNetworkEventsMsecs;
@property(readonly, nonatomic) unsigned long long *timeToNetworkEventsMsecs;
@property(readonly, nonatomic) unsigned long long timeToNetworkEventsMsecsCount;
- (int)StringAsNetworkEvents:(id)arg1;
- (id)networkEventsAsString:(int)arg1;
- (void)setNetworkEvents:(int *)arg1 count:(unsigned long long)arg2;
- (int)networkEventsAtIndex:(unsigned long long)arg1;
- (void)addNetworkEvents:(int)arg1;
- (void)clearNetworkEvents;
@property(readonly, nonatomic) int *networkEvents;
@property(readonly, nonatomic) unsigned long long networkEventsCount;
@property(nonatomic) BOOL hasFallbackTimerMsecs;
- (int)StringAsDenyReason:(id)arg1;
- (id)denyReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasDenyReason;
@property(nonatomic) int denyReason; // @synthesize denyReason=_denyReason;
@property(nonatomic) BOOL hasFellback;
- (void)dealloc;

@end

