//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MigrationProgressEventsListener.h"
#import "NSUserNotificationCenterDelegate.h"

@class NSString;

@interface SMMigrationUserNotifier : NSObject <MigrationProgressEventsListener, NSUserNotificationCenterDelegate>
{
}

+ (BOOL)getConsoleUID:(unsigned int *)arg1;
- (void)removeAllDeliveredNotifications;
- (void)showNotificationWithTitle:(id)arg1 informativeText:(id)arg2 actionButtonTitle:(id)arg3 action:(long long)arg4;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)reconnecting:(BOOL)arg1;
- (void)engineStateChanged:(unsigned long long)arg1;
- (void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

