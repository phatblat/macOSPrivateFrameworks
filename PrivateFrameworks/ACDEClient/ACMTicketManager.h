//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ACDEClient/ACCTicketManager.h>

@interface ACMTicketManager : ACCTicketManager
{
}

- (id)decodedUserPreferences:(id)arg1;
- (id)encodedUserPreferences:(id)arg1;
- (id)userPreferencesForToken:(id)arg1;
- (void)setUserPreferences:(id)arg1 forToken:(id)arg2;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3;
- (id)publicKeyVersionForRealm:(id)arg1;
- (id)certificateLabelForRealm:(id)arg1;
- (struct __SecCertificate *)defaultPublicKeyCertificateForRealm:(id)arg1;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (id)systemInfo;
- (id)preferences;
- (id)components;

@end

