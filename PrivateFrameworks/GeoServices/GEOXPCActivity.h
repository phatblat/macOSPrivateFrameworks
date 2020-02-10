//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface GEOXPCActivity : NSObject
{
    NSString *_name;
    BOOL _isRepeating;
    BOOL _shouldLaunchDaemon;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_activity;
}

+ (void)cancelActivity:(id)arg1;
+ (id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)checkInActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resetActivities;
+ (void)clearActivity:(id)arg1;
+ (void)addActivity:(id)arg1 shouldLaunchDaemon:(BOOL)arg2 repeating:(BOOL)arg3;
+ (void)updateActivities:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelActivity;
- (void)finishActivity;
- (void)deferActivity;
- (BOOL)shouldDeferActivity;
- (void)_handleRunActivity:(id)arg1;
- (id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;

@end
