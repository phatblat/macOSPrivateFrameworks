//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@interface ACDAccountNotifier : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationEntryQueue;
    NSArray *_notificationEntries;
}

+ (id)allNotificationEntries;
@property(readonly, copy, nonatomic) NSArray *notificationEntries; // @synthesize notificationEntries=_notificationEntries;
- (void).cxx_destruct;
- (id)_provisionedDataclassesForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_unsafe_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2;
- (id)_unsafe_pluginsRegisteredForAccount:(id)arg1;
- (id)_pluginsRegisteredForAccount:(id)arg1;
- (void)removeAllNotificationEntries;
- (void)addNotificationEntry:(id)arg1;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (BOOL)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (id)initWithNotificationEntries:(id)arg1;
- (id)init;

@end

