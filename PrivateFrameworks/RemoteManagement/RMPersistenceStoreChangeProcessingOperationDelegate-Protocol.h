//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSManagedObjectContext, NSPersistentHistoryToken, NSString;

@protocol RMPersistenceStoreChangeProcessingOperationDelegate <NSObject>
- (void)performBackgroundTask:(void (^)(NSManagedObjectContext *))arg1;
- (void)handlePersistenceStoreChanges:(NSDictionary *)arg1 managedObjectContext:(NSManagedObjectContext *)arg2;
- (void)savePersistentHistoryToken:(NSPersistentHistoryToken *)arg1 forStoreIdentifier:(NSString *)arg2;
- (NSPersistentHistoryToken *)persistentHistoryTokenForStoreIdentifier:(NSString *)arg1;
@end
