//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet;

@interface FPDProcessMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_notificationsByPid;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
    id <FPDProcessMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <FPDProcessMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (void)removePIDToObserve:(int)arg1;
- (void)_removePIDToObserve:(int)arg1;
- (void)addPIDToObserve:(int)arg1;
- (void)process:(int)arg1 didBecomeForeground:(BOOL)arg2;
- (void)_addPIDToObserve:(int)arg1;
- (BOOL)isForeground;
- (id)prettyDescription;
- (id)description;
- (id)initWithExcludedBundleIDs:(id)arg1;

@end

