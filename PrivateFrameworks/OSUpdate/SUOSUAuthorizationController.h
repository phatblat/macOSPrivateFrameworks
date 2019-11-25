//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SUOSUAuthorizationController : NSObject
{
    const struct AuthorizationOpaqueRef *_authorizationForInstalling;
    const struct AuthorizationOpaqueRef *_authorizationForModifyingPreferences;
}

+ (id)sharedInstance;
@property const struct AuthorizationOpaqueRef *authorizationForModifyingPreferences; // @synthesize authorizationForModifyingPreferences=_authorizationForModifyingPreferences;
@property const struct AuthorizationOpaqueRef *authorizationForInstalling; // @synthesize authorizationForInstalling=_authorizationForInstalling;
- (BOOL)_managedPreferenceForKey:(id)arg1 domain:(id)arg2;
- (BOOL)_attemptInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_attemptNonInteractiveAuthorizationForModifyingPreferences;
- (BOOL)_attemptInteractiveAuthorizationForInstalling;
- (BOOL)_attemptNonInteractiveAuthorizationForInstallingAsStandardUser;
- (BOOL)_allowSoftwareInstallForNonAdminUser;
- (BOOL)_attemptNonInteractiveAuthorizationForInstalling;
- (BOOL)authorizeForModifyingPreferences;
- (BOOL)authorizeForSoftwareInstall;

@end

