//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject
{
    int _contentProtectionNotifyToken;
    NSManagedObjectContext *_managedObjectContext;
}

@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (BOOL)saveIfPossible;
- (BOOL)isProtectedDataAvailable;
- (void)contentDidUpdate:(id)arg1;
- (void)logMessage:(id)arg1;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (void)storesWillChange:(id)arg1;
- (void)setupDatabase;
- (id)apsConnectionMachServiceName;
- (void)dealloc;
- (id)init;

@end
