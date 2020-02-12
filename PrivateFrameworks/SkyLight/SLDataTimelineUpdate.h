//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SLDataTimelineUpdate.h"

@class SLDataTimelineConnection, SLDataTimelineSnapshotCollection;

__attribute__((visibility("hidden")))
@interface SLDataTimelineUpdate : NSObject <SLDataTimelineUpdate>
{
    SLDataTimelineConnection *_connection;
    BOOL _collectionClaimed;
    unsigned int _action;
    SLDataTimelineSnapshotCollection *_collection;
}

+ (id)updateWithConnection:(id)arg1 collection:(id)arg2 action:(unsigned int)arg3;
@property(nonatomic) BOOL collectionClaimed; // @synthesize collectionClaimed=_collectionClaimed;
@property(readonly, nonatomic) SLDataTimelineSnapshotCollection *collection; // @synthesize collection=_collection;
@property(readonly, nonatomic) id <SLDataTimelineConnection> connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) unsigned int action; // @synthesize action=_action;
- (id)claimSnapshotCollection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 collection:(id)arg2 action:(unsigned int)arg3;
@property(readonly, nonatomic) double newestSnapshotTimestamp;
@property(readonly, nonatomic) double oldestSnapshotTimestamp;
@property(readonly, nonatomic) unsigned long long newestSnapshotIndex;
@property(readonly, nonatomic) unsigned long long oldestSnapshotIndex;
@property(readonly, nonatomic) unsigned long long snapshotCount;

@end

