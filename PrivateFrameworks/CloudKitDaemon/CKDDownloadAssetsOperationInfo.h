//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKDatabaseOperationInfo.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo
{
    BOOL _shouldFetchAssetContentInMemory;
    NSArray *_assetsToDownload;
    NSArray *_packageIndexSets;
    NSArray *_assetsToDownloadInMemory;
    NSArray *_assetURLInfosToFillOut;
}

@property(retain, nonatomic) NSArray *assetURLInfosToFillOut; // @synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut;
@property(retain, nonatomic) NSArray *assetsToDownloadInMemory; // @synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory;
@property(retain, nonatomic) NSArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(nonatomic) BOOL shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
- (void).cxx_destruct;

@end

