//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKUtilityService.h"

@class NSData, NSURL;

@protocol GKUtilityServicePrivate <GKUtilityService>
- (oneway void)loadDataForURL:(NSURL *)arg1 postBody:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (oneway void)refreshPreferences;
- (oneway void)updateNotificationTopics;
- (oneway void)pingWithHandler:(void (^)(void))arg1;
- (oneway void)terminate;
- (oneway void)openGameCenterSettings;
- (oneway void)openICloudSettings;
- (oneway void)openSettings;
@end

