//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCStatisticsHistory : NSObject
{
    struct VCStatisticsPacketHistory _packetHistory[500];
    int _packetHistorySize;
    int _currentPacketHistoryIndex;
}

- (BOOL)getTimestampWithPacketId:(unsigned int)arg1 timestamp:(double *)arg2;
- (BOOL)getTotalPacketCountWithPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int *)arg2;
- (void)addPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int)arg2 time:(double)arg3;

@end

