//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformImplementation.h"

@class CPLChangeSessionUpdate, CPLEngineStoreTransaction, NSArray, NSDate, NSString;

@protocol CPLEngineStoreImplementation <CPLPlatformImplementation>
@property(readonly, nonatomic) id corruptionInfo;
@property(readonly) NSDate *libraryCreationDate;
@property(readonly, nonatomic) BOOL shouldUpdateDisabledFeatures;
@property(readonly, nonatomic) CPLChangeSessionUpdate *storedChangeSessionUpdate;
@property(readonly, nonatomic) BOOL hasStoredChangeSessionUpdate;
- (NSString *)status;
- (BOOL)markDatabaseAsDeactivatedWithError:(id *)arg1;
- (NSArray *)disabledFeatures;
- (BOOL)storeDisabledFeatures:(NSArray *)arg1 error:(id *)arg2;
- (BOOL)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;
- (BOOL)storeChangeSessionUpdate:(CPLChangeSessionUpdate *)arg1 error:(id *)arg2;
- (BOOL)isClientInSyncWithClientCache;
- (BOOL)storeClientIsNotInSyncWithClientCacheWithError:(id *)arg1;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (NSString *)createNewClientCacheIdentifier;
- (BOOL)storeClientCacheIdentifier:(NSString *)arg1 error:(id *)arg2;
- (NSString *)clientCacheIdentifier;
- (BOOL)storeLastQuarantineCountReportDate:(NSDate *)arg1 error:(id *)arg2;
- (NSDate *)lastQuarantineCountReportDate;
- (BOOL)storeUserIdentifier:(id <CPLEngineStoreUserIdentifier>)arg1 error:(id *)arg2;
- (id <CPLEngineStoreUserIdentifier>)userIdentifier;
- (NSString *)createNewLibraryVersion;
- (BOOL)storeLibraryVersion:(NSString *)arg1 withError:(id *)arg2;
- (NSString *)libraryVersion;
- (BOOL)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)libraryOptions;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (void)performBarrierTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2;
- (void)performWriteTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)performReadTransaction:(CPLEngineStoreTransaction *)arg1 withBlock:(void (^)(void))arg2;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)executePostOpenWithError:(id *)arg1;
- (BOOL)openWithError:(id *)arg1;
@end
