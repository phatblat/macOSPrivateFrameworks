//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SPShortcuts : NSObject
{
    NSMutableDictionary *_userShortcutsDictionary;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _userShortcutsLock;
    BOOL _isShortcutDictChanged;
}

+ (id)defaultShortcuts;
+ (id)pathToShortcuts;
+ (id)pathWithComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dumpShortcuts;
- (void)removeShortcutsResultForShortcutString:(id)arg1;
- (void)rememberResult:(id)arg1 forUserShortcut:(id)arg2 isAdvancedQuery:(BOOL)arg3;
- (void)rememberForUniqueIdentifier:(id)arg1 forUserShortcut:(id)arg2 date:(id)arg3 forceReload:(BOOL)arg4;
- (id)resultForUserShortcut:(id)arg1;
- (id)URLStringForUserShortcut:(id)arg1;
- (id)dictionaryForUserShortcut:(id)arg1;
- (id)getShortcutsDictionary;
- (void)setShortcuts:(id)arg1;
- (void)migrateShortcuts;
- (void)deleteMigrationFile;
- (BOOL)needsShortcutsMigration;
- (id)init;

@end

