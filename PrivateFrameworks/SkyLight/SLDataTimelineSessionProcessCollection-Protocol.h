//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol SLDataTimelineSessionProcessCollection
@property(readonly, nonatomic) NSArray *processes;
@property(readonly, nonatomic) int foregroundAppPID;
@property(readonly, nonatomic) unsigned long long sessionSnapshotIndex;
@property(readonly, nonatomic) double sessionSnapshotTimestamp;
- (void)processesApplyBlock:(void (^)(id <SLDataTimelineProcess>))arg1;
@end
