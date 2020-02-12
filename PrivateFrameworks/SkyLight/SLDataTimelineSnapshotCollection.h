//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SLDataTimelineSnapshotCollection.h"
#import "SLXPCExportable.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SLDataTimelineSnapshotCollection : NSObject <SLDataTimelineSnapshotCollection, SLXPCExportable>
{
    NSMutableArray *_snapshotsArray;
}

+ (id)snapshotArrayFromXPCObject:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *snapshotsArray; // @synthesize snapshotsArray=_snapshotsArray;
- (void)snapshotsApplyBlock:(CDUnknownBlockType)arg1;
- (id)createXPCObject;
- (void)dealloc;
- (id)init;
- (void)mergeInNewSnapshots:(id)arg1;
@property(readonly, nonatomic) double newestSnapshotTimestamp;
@property(readonly, nonatomic) double oldestSnapshotTimestamp;
@property(readonly, nonatomic) unsigned long long newestSnapshotIndex;
@property(readonly, nonatomic) unsigned long long oldestSnapshotIndex;
@property(readonly, nonatomic) unsigned long long snapshotCount;
@property(readonly, nonatomic) NSArray *snapshots;

@end
