//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UXSettings.h"

@class NSMutableSet;

@interface PXSettings : _UXSettings
{
    NSMutableSet *_archivedSettings;
    long long _version;
}

+ (id)_signatureDictionaryWithDefaultSettings:(id *)arg1;
+ (id)_defaultsKey;
+ (id)_userDefaults;
+ (id)createSharedInstance;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (void)performPostSaveActions;
- (id)archiveValueForKey:(id)arg1;
- (void)save;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (id)parentSettings;

@end
