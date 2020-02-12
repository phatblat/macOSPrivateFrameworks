//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMAPFSSnapshotProtocol.h"

@class NSString, NSURL;

@interface TMSnapshot : NSObject <TMAPFSSnapshotProtocol>
{
    int _flags;
    NSURL *_liveVolumeMountPoint;
    NSString *_name;
    unsigned long long _xid;
}

+ (id)snapshotsForLiveVolumeMountPoint:(id)arg1 error:(id *)arg2;
@property(readonly) int flags; // @synthesize flags=_flags;
@property(readonly) unsigned long long xid; // @synthesize xid=_xid;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSURL *liveVolumeMountPoint; // @synthesize liveVolumeMountPoint=_liveVolumeMountPoint;
- (BOOL)makeDataless:(id *)arg1;
- (BOOL)waitForDeletionUntil:(id)arg1 error:(id *)arg2;
- (BOOL)delete:(id *)arg1;
- (BOOL)mountAtURL:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithLiveVolumeMountPoint:(id)arg1 name:(id)arg2 xid:(unsigned long long)arg3 flags:(int)arg4;

@end

