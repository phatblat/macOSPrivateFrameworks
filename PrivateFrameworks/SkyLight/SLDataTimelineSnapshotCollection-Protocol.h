//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLDataTimelineSnapshotCollectionMetadata.h"

@class NSArray;

@protocol SLDataTimelineSnapshotCollection <SLDataTimelineSnapshotCollectionMetadata>
@property(readonly, nonatomic) NSArray *snapshots;
- (void)snapshotsApplyBlock:(void (^)(id <SLDataTimelineServerSnapshot>))arg1;
@end

