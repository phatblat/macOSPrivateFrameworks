//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSTask.h>

#import "MFEWSRetrievePersistedFolderDataDelegate.h"

@class MFEWSRetrievePersistedFolderDataOperation, NSMutableSet, NSString;

@interface MFEWSRetrievePersistedFolderDataTask : MFEWSTask <MFEWSRetrievePersistedFolderDataDelegate>
{
    MFEWSRetrievePersistedFolderDataOperation *_retrievePersistedFolderDataOperation;
    NSMutableSet *_urlsNeedingData;
    id <MFEWSMailboxDataCache> _cache;
}

@property(readonly, nonatomic) id <MFEWSMailboxDataCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)retrievePersistedFolderDataOperation:(id)arg1 didRetrieveFolderIDsByURL:(id)arg2 syncStatesByURL:(id)arg3 missedMailboxURLs:(id)arg4;
- (void)operationFinished:(id)arg1;
@property(retain, nonatomic) MFEWSRetrievePersistedFolderDataOperation *retrievePersistedFolderDataOperation;
- (void)retrieveDataForMailboxURLs:(id)arg1;
- (id)init;
- (id)initWithMailboxDataCache:(id)arg1 accountName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
