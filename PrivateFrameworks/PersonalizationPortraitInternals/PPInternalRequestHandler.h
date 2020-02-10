//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPInternalServerProtocol.h"

@interface PPInternalRequestHandler : NSObject <PPInternalServerProtocol>
{
}

- (void)sysdiagnoseInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)abGroupInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetVersionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_allowableAssetIdentifiers;
- (void)downloadAssetMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)assetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearAssetMetadataRefreshIntervalSecondsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
