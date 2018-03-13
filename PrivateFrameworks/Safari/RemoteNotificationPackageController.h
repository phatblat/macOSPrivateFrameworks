//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RemoteNotificationPackageController : NSObject
{
    NSMutableDictionary *_permissions;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableDictionary *permissions; // @synthesize permissions=_permissions;
- (void).cxx_destruct;
- (void)_loadPackageInformationIfNecessary;
- (id)identifiersAddedBetweenDate:(id)arg1 andDate:(id)arg2 withAllowedPermissions:(BOOL)arg3 withDeniedPermissions:(BOOL)arg4;
- (void)getRemoteNotificationInformationForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_notificationBundleExistsForIdentifier:(id)arg1;
- (void)generateNotificationBundlesIfNecessary;
- (id)deviceTokenForIdentifier:(id)arg1;
- (void)forgetPermissionForIdentifier:(id)arg1;
- (id)notificationCenterBundlePathForIdentifier:(id)arg1;
- (id)_packagePathForIdentifier:(id)arg1;
- (void)denyPermissionForIdentifier:(id)arg1;
- (void)grantPermissionForIdentifier:(id)arg1 withDeviceToken:(id)arg2;
- (void)setPackageLocation:(id)arg1 name:(id)arg2 allowedDomains:(id)arg3 forIdentifier:(id)arg4;
- (void)_queueSavePackageInformation;
- (id)_ensureMutableSettingsForIdentifier:(id)arg1;

@end

