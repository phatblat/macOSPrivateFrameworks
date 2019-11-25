//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSManagedObjectID, PLPhotoLibrary;

@protocol PLBackgroundJobWorkerProtocol <NSObject>
+ (id)workerWithLibrary:(PLPhotoLibrary *)arg1;
- (void)performWorkOnManagedObjectID:(NSManagedObjectID *)arg1 completion:(void (^)(NSError *))arg2;
- (NSArray *)managedObjectIDsNeedingProcessing;
- (BOOL)hasPendingJobs;

@optional
- (void)stopWorkingOnManagedObjectID:(NSManagedObjectID *)arg1;
- (BOOL)isInterruptible;
@end

