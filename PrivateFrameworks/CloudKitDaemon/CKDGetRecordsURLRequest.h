//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDGetRecordsURLRequest : CKDURLRequest
{
    BOOL _shouldFetchAssetContent;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSSet *_desiredAssetKeys;
    CDUnknownBlockType _recordFetchedBlock;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned long long _recordCount;
    NSMutableDictionary *_recordIDByRequestID;
    NSSet *_desiredKeys;
}

@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(nonatomic) unsigned long long recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(retain, nonatomic) NSDictionary *recordIDsToETags; // @synthesize recordIDsToETags=_recordIDsToETags;
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSSet *desiredAssetKeys; // @synthesize desiredAssetKeys=_desiredAssetKeys;
@property(nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property(nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) NSSet *assetFieldNamesToPublishURLs; // @synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (BOOL)allowsAnonymousAccount;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;

@end

