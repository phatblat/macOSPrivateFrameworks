//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDBulletinBoard, HMDDeviceFileManager, HMDHeroFrameDataSource, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging>
{
    HMDBulletinBoard *_bulletinBoard;
    HMDDeviceFileManager *_fileManager;
    HMDHeroFrameDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_heroFrameDirPath;
}

+ (id)logCategory;
@property(readonly) NSString *heroFrameDirPath; // @synthesize heroFrameDirPath=_heroFrameDirPath;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDHeroFrameDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDDeviceFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
- (void).cxx_destruct;
- (void)removeEventNotificationForClipWithUUID:(id)arg1;
- (void)postSignificantEventNotification:(id)arg1 forCameraProfile:(id)arg2;
- (unsigned long long)_effectiveReasonForSignificantEvent:(id)arg1;
- (id)_copyHeroFrameAtURL:(id)arg1;
- (void)_removeFile:(id)arg1;
- (BOOL)_createDirectoryAtPathIfNonExistent:(id)arg1;
- (id)initWithBulletinBoard:(id)arg1 fileManager:(id)arg2 dataSource:(id)arg3 workQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
