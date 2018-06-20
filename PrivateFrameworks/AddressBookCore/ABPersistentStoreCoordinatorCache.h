//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersistentStoreCoordinatorMap, ABPersistentStoreCoordinatorUpdater, NSString;

@interface ABPersistentStoreCoordinatorCache : NSObject
{
    id <ABAccountCollection> _accountCollection;
    ABPersistentStoreCoordinatorMap *_coordinatorMap;
    ABPersistentStoreCoordinatorUpdater *_coordinatorUpdater;
}

+ (id)sharedInstance;
@property(readonly) id <ABAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
- (void)accountsDidChange:(id)arg1;
- (void)startObserving;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (id)coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (id)coordinatorForAllSources;
- (id)basePathForAccountWithIdentifier:(id)arg1;
@property(readonly, copy) NSString *basePath;
- (void)dealloc;
- (id)initWithAccountCollection:(id)arg1 readOnly:(BOOL)arg2;

@end

