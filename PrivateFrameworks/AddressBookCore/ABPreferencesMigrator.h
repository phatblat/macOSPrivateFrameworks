//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABUserDefaults;

@interface ABPreferencesMigrator : NSObject
{
    ABUserDefaults *_defaults;
}

+ (void)migrateDefaults:(id)arg1;
- (void)updateBirthdayVisiblePreferenceFromVersion:(long long)arg1;
- (BOOL)birthdayVisiblePreferenceExists;
- (void)updatePrivateMeCardPreferencesFromVersion:(long long)arg1;
- (BOOL)hasPrivateMeCardFields;
- (void)enablePrivateMeCardFields;
- (BOOL)privateMeCardFieldsEnabledPreferenceExists;
- (void)updatePreferencesVersionFromVersion:(long long)arg1;
- (long long)preferencesVersion;
- (void)migrateDefaults;
- (void)dealloc;
- (id)initWithDefaults:(id)arg1;

@end

