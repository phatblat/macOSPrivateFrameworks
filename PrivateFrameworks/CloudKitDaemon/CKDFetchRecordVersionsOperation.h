//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDDecryptRecordsOperation, NSArray, NSObject<OS_dispatch_group>, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation
{
    CKDDecryptRecordsOperation *_decryptOperation;
    BOOL _isDeleted;
    BOOL _shouldFetchAssetContent;
    CDUnknownBlockType _recordVersionFetchedBlock;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSObject<OS_dispatch_group> *_fetchVersionsGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup; // @synthesize fetchVersionsGroup=_fetchVersionsGroup;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(retain, nonatomic) NSString *minimumVersionETag; // @synthesize minimumVersionETag=_minimumVersionETag;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordVersionFetchedBlock; // @synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4;
- (BOOL)hasDecryptOperation;
@property(readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

