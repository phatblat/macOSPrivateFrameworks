//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator : NSObject
{
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    BOOL _videoEnabled;
    BOOL _redundancyEnabled;
}

- (void)assignCurrentTables;
- (id)audioRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)videoEntriesForTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(BOOL)arg2;
- (BOOL)isAvailableStreamConfiguration:(id)arg1;
- (BOOL)enableVideoStream:(BOOL)arg1 streamID:(unsigned short)arg2;
- (id)audioEntriesForTargetBitrate:(unsigned int)arg1;
@property(nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

