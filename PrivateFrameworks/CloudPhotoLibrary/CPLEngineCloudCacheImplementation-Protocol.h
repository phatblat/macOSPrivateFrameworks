//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineStorageImplementation.h"

@class CPLRecordChange, NSData, NSString;

@protocol CPLEngineCloudCacheImplementation <CPLEngineStorageImplementation>
@property(readonly) BOOL hasFinishedAFullSync;
@property(readonly) BOOL hasFinishedInitialSync;
- (id <NSFastEnumeration>)allRecordsIsFinal:(BOOL)arg1;
- (id <NSFastEnumeration>)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (NSData *)initialSyncAnchor;
- (BOOL)setInitialSyncAnchor:(NSData *)arg1 error:(id *)arg2;
- (BOOL)setClassNameOfRecordsForInitialQuery:(NSString *)arg1 error:(id *)arg2;
- (NSString *)classNameOfRecordsForInitialQuery;
- (BOOL)resetSyncAnchorWithError:(id *)arg1;
- (BOOL)setSyncAnchor:(NSData *)arg1 error:(id *)arg2;
- (NSData *)syncAnchor;
- (BOOL)storeDownloadTransportGroup:(id <CPLEngineTransportGroup>)arg1 error:(id *)arg2;
- (id <CPLEngineTransportGroup>)downloadTransportGroup;
- (BOOL)storeUploadTransportGroup:(id <CPLEngineTransportGroup>)arg1 error:(id *)arg2;
- (id <CPLEngineTransportGroup>)uploadTransportGroup;
- (BOOL)discardStagedChangesWithError:(id *)arg1;
- (BOOL)commitStagedChangesWithError:(id *)arg1;
- (BOOL)confirmAllRecordsWithError:(id *)arg1;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(NSString *)arg1 newIdentifier:(NSString *)arg2 error:(id *)arg3;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)hasRecordWithIdentifier:(NSString *)arg1;
- (id <NSFastEnumeration>)recordsWithRelatedIdentifier:(NSString *)arg1 isFinal:(BOOL)arg2;
- (CPLRecordChange *)recordWithIdentifier:(NSString *)arg1 isConfirmed:(char *)arg2;
- (CPLRecordChange *)recordWithIdentifier:(NSString *)arg1 isFinal:(BOOL)arg2;
- (BOOL)deleteRecordWithIdentifier:(NSString *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)updateRecord:(CPLRecordChange *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addRecord:(CPLRecordChange *)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
@end

