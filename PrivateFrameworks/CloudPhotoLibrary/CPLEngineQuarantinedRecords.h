//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject.h"

@class CPLPlatformObject, CPLRejectedRecords, NSMutableArray, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    BOOL _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    unsigned long long _newRejectedCount;
}

- (void).cxx_destruct;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)resetRejectedRecordsWithError:(id *)arg1;
- (BOOL)bumpRejectedRecords:(id)arg1 error:(id *)arg2;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (BOOL)isRecordWithIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

