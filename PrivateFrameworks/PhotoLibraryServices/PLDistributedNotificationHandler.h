//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PLPhotoLibraryBundleController;

@interface PLDistributedNotificationHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void).cxx_destruct;
- (void)_openSystemPhotoLibrary;
- (void)_handleCloudPhotoNotification;
- (void)_handleNotification:(id)arg1;
- (void)registerForNotifications;
- (id)initWithLibraryBundleController:(id)arg1;

@end

