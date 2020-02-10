//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKUploadRequestMetadata;

__attribute__((visibility("hidden")))
@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest
{
    BOOL _writeRepairRecord;
    CDUnknownBlockType _assetBrokenBlock;
    CKUploadRequestMetadata *_metadata;
}

@property(nonatomic) BOOL writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(copy, nonatomic) CKUploadRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType assetBrokenBlock; // @synthesize assetBrokenBlock=_assetBrokenBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithAssetOrPackageMetadata:(id)arg1 writeRepairRecord:(BOOL)arg2;

@end
