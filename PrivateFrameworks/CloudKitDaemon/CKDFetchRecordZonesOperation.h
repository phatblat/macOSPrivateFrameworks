//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation
{
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _shouldRetry;
    BOOL _onlyFetchPCSInfo;
    BOOL _ignorePCSFailures;
    CDUnknownBlockType _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
    NSMutableDictionary *_zonesToSaveForPCSUpdateByZoneID;
    NSMutableArray *_zoneIDsNeedingPCSUpdateRetry;
    NSMutableDictionary *_pcsUpdateErrorsByZoneID;
    long long _numZoneSaveAttempts;
}

@property(nonatomic) BOOL ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) BOOL onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(nonatomic) long long numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID; // @synthesize pcsUpdateErrorsByZoneID=_pcsUpdateErrorsByZoneID;
@property(retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry; // @synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry;
@property(nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID; // @synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID;
@property(nonatomic) BOOL isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedProgressBlock; // @synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)checkPCSIdentity;
- (void)fetchZonesFromServer;
- (void)_cachePCSOnRecordZone:(id)arg1;
- (void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (void)saveZonesWithUpdatedZonePCS;
- (void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2;
- (BOOL)_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id *)arg2;
- (void)_sendErrorForFailedZones;
- (id)activityCreate;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

