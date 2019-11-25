//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CATTaskOperationNotificationDelegate.h"

@class CATRemoteTaskOperation, NSString;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate>
{
    id <CRKRequestPerformingProtocol> mDaemonProxy;
    CATRemoteTaskOperation *mSubscriptionOperation;
    long long _settingsUIVisible;
}

@property(nonatomic) long long settingsUIVisible; // @synthesize settingsUIVisible=_settingsUIVisible;
- (void).cxx_destruct;
- (void)settingsUIVisibleDidChange:(BOOL)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (BOOL)isCurrentSubscriptionOperation:(id)arg1;
- (void)endUpdating;
- (void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)arg1;
- (void)beginUpdating;
- (id)initWithDaemonProxy:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

