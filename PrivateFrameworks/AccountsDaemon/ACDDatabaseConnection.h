//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id <NSObject> _managedObjectContextDidSaveObserver;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    id <ACDDatabaseConnectionDelegate> _delegate;
}

+ (id)new;
@property(nonatomic) __weak id <ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (void).cxx_destruct;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_managedObjectContextDidSave:(id)arg1;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)_handleManagedObjectContextError:(id)arg1;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;
- (BOOL)saveWithError:(id *)arg1 rollbackOnFailure:(BOOL)arg2;
- (BOOL)saveWithError:(id *)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
@property(retain, nonatomic) NSNumber *keychainVersion;
@property(retain, nonatomic) NSNumber *version;
- (id)_persistentStore;
- (id)_managedObjectModel;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)init;

@end

