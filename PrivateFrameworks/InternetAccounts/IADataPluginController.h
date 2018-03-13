//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IADataPluginDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IADataPluginController : NSObject <IADataPluginDelegate>
{
    NSMutableDictionary *_plugins;
    NSMutableDictionary *_workQueues;
    NSMutableArray *_dataPluginNotificationHistory;
}

+ (void)plugin:(id)arg1 performBlock:(CDUnknownBlockType)arg2 withTimeOut:(long long)arg3;
+ (void)plugin:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain) NSMutableArray *dataPluginNotificationHistory; // @synthesize dataPluginNotificationHistory=_dataPluginNotificationHistory;
- (void).cxx_destruct;
- (void)plugin:(id)arg1 aosAccountMigrationFinished:(id)arg2;
- (void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3;
- (void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3;
- (void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3;
- (BOOL)plugin:(id)arg1 handleCertificateError:(id)arg2;
- (void)plugin:(id)arg1 didChangeAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didCreateAccountUID:(id)arg2;
- (id)_queueForPluginID:(id)arg1;
- (void)plugin:(id)arg1 performBlock:(CDUnknownBlockType)arg2 withTimeOut:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

