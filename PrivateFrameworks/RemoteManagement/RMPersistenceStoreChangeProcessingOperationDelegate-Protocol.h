//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPersistentHistoryToken, NSPersistentStore;

@protocol RMPersistenceStoreChangeProcessingOperationDelegate <NSObject>
- (void)savePersistentHistoryToken:(NSPersistentHistoryToken *)arg1 forStore:(NSPersistentStore *)arg2;
- (NSPersistentHistoryToken *)persistentHistoryTokenForStore:(NSPersistentStore *)arg1;
@end

