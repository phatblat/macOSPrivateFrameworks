//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKLaterAgent : NSObject
{
}

+ (BOOL)isRestartCountdownShown;
+ (long long)showRestartCountdownNotification;
+ (void)armedStateWithReply:(CDUnknownBlockType)arg1;
+ (BOOL)isArmedForInstallLater;
+ (void)disarmObserver;
+ (void)armObserverWithMode:(long long)arg1;
+ (void)_sendAgentMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
+ (void)_sendAgentCommand:(long long)arg1 mode:(long long)arg2;

@end

