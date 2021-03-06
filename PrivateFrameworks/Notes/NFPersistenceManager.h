//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NFPersistenceManager : NSObject
{
}

+ (id)managedObjectContext;
+ (id)notesContainerLibraryURL;
+ (void)setNotesContainerLibraryURL:(id)arg1;
+ (BOOL)_backupExistingStore:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;
+ (id)_storeURLForVersion:(unsigned long long)arg1 inDataDirectory:(id)arg2;
+ (id)_validStoreURLInDataDirectory:(id)arg1 movingOldStoreIfNeeded:(BOOL)arg2 withCoordinator:(id)arg3 error:(id *)arg4;
+ (id)persistentStoreCoordinatorAddPersistentStoreIfNecessary:(BOOL)arg1;
+ (id)persistentStoreCoordinator;
+ (void)addPersistentStoreIfNeeded;
+ (id)managedObjectModel;
+ (BOOL)isAppSandboxed;
+ (BOOL)isRunningInNotes;
+ (void)setStoreCoordinatorIsReadOnly:(BOOL)arg1;
+ (BOOL)storeCoordinatorIsReadOnly;

@end

