//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLPreferencesUtilities : NSObject
{
}

+ (void)_synchronizeDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2;
+ (void)_setValue:(void *)arg1 forKey:(struct __CFString *)arg2 inDomain:(struct __CFString *)arg3 usingPreferencesScope:(int)arg4;
+ (struct __CFDictionary *)_copyAllKeysAndValuesFromDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2;
+ (void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg1 inDomain:(struct __CFString *)arg2 usingPreferencesScope:(int)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(const id *)arg1 regularPreferenceKeysCount:(unsigned long long)arg2;
+ (void)migratePerTopicPreferencesInDomain:(struct __CFString *)arg1 withRegularPreferenceKeys:(const id *)arg2 regularPreferenceKeysCount:(unsigned long long)arg3 intoSinglePerTopicPreferenceWithSuffix:(id)arg4 usingPreferencesScope:(int)arg5;
+ (struct __CFString *)copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg1;
+ (struct __CFString *)copySharedResourcesPreferencesDomain;
+ (struct __CFString *)preferencesDomain;

@end

