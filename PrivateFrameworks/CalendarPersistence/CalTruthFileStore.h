//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistenceMonitor.h>

@class NSOperationQueue;

@interface CalTruthFileStore : CalPersistenceMonitor
{
    NSOperationQueue *_queue;
}

+ (void)_enableForUnitTesting;
+ (void)_disableForUnitTesting;
+ (id)defaultMonitor;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)arg1;
- (BOOL)isInterestedInContext:(id)arg1;
- (void)removeFilesForObjects:(id)arg1;
- (void)writeFilesForObjects:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)waitUntilAllOperationsAreFinished;
- (id)init;

@end

