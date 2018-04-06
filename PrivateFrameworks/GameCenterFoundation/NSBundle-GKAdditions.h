//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBundle.h"

@interface NSBundle (GKAdditions)
+ (BOOL)_gkMainBundleIsGameCenterSystemProcess;
+ (id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkBundleWithIdentifier:(id)arg1;
- (BOOL)_gkIsDaemon;
- (BOOL)_gkIsPreferences;
- (BOOL)_gkIsGameCenterExtension;
- (BOOL)_gkIsGameCenter;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkPreferredLanguage;
- (id)_gkLocalizedName;
- (id)_gkBundleShortVersion;
- (id)_gkBundleVersion;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (id)_gkPathForMessageImage;
- (id)_gkPathForImageWithName:(id)arg1;
- (id)_gkPathForSoundWithName:(id)arg1;
- (BOOL)_gkIsBadgingEnabled;
@end
