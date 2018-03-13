//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLAWDMetricQueryDelegate.h"
#import "PMLTrainingProtocol.h"

@class DESRecordStore, NSSet, NSString, PMLAWDAvailableSessionsTracker, PMLTrainingStore;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol>
{
    DESRecordStore *_fidesStore;
    PMLAWDAvailableSessionsTracker *_availableSessionsTracker;
    NSSet *_multiLabelModels;
    PMLTrainingStore *_store;
}

+ (id)sharedSingletonWithDirectory:(id)arg1;
+ (BOOL)isEnabled;
@property(readonly) PMLTrainingStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)trainWhileDoneForTesting;
- (id)planReceivedWithPayload:(id)arg1 error:(id *)arg2;
- (BOOL)modelServerUpdateWithPayload:(id)arg1 error:(id *)arg2;
- (void)trimDb;
- (void)trainWhile:(CDUnknownBlockType)arg1;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)_deleteAllSavedRecordsFromFidesStoreSync;
- (void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 support:(float)arg4;
- (void)_sendSessionStatsToFides;
- (BOOL)isMultiLabelModel:(id)arg1;
- (void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5;
- (void)availableSessionsStatsReportedToAWD;
- (void)enumerateAvailableSessionsStatsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

