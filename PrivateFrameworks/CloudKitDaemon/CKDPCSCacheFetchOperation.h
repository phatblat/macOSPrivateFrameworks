//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDPCSCache, CKDPCSData, CKDRecordPCSData, NSError, NSObject<OS_dispatch_group>, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation
{
    BOOL _willRetryFetchSuperCalled;
    BOOL _didFetchData;
    BOOL _wasFetchedFromCache;
    BOOL _shouldRetry;
    BOOL _pcsDataInvalidated;
    int _numRetries;
    NSObject<OS_dispatch_group> *_fetchGroup;
    CKDPCSCache *_cache;
    id <CKSQLiteItem> _itemID;
    unsigned long long _fetchOptions;
    CKDPCSData *_pcsData;
    NSError *_fetchError;
    CKDRecordPCSData *_parentPCSData;
}

@property(getter=isPCSDataInvalidated) BOOL pcsDataInvalidated; // @synthesize pcsDataInvalidated=_pcsDataInvalidated;
@property(retain, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property(nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property(nonatomic) BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(nonatomic) BOOL didFetchData; // @synthesize didFetchData=_didFetchData;
@property(nonatomic) BOOL willRetryFetchSuperCalled; // @synthesize willRetryFetchSuperCalled=_willRetryFetchSuperCalled;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) id <CKSQLiteItem> itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_willRetryFetch;
- (BOOL)_savePCSDataToCache;
- (BOOL)_saveUpdatedPCSToServer;
- (BOOL)_decryptPCS;
- (BOOL)_fetchDependentPCS;
- (BOOL)_createAdditionalPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)needsAdditionalPCSCreation;
@property(readonly, nonatomic) BOOL hasAllPCSData;
@property(readonly, nonatomic) NSString *itemTypeName;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (BOOL)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

