//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALNTriggeredEventNotificationDataStorage.h"

@class CALNInMemoryTriggeredEventNotificationDataStorage, NSObject<OS_dispatch_queue>, NSString;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>
{
    NSString *_path;
    CALNInMemoryTriggeredEventNotificationDataStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)notificationDataFromPersistentStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)persistentStorageWithPath:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)_saveDataWithError:(id *)arg1;
- (BOOL)_loadDataWithError:(id *)arg1;
- (void)_removeData;
- (void)_removeNotificationDataWithIdentifier:(id)arg1;
- (void)_addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (id)notificationData;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

