//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface PXMediaTypeInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_pendingCompletionHandlers;
}

+ (id)knowledgeBaseFallbackURL;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)mediaTypeInfoURLForUTI:(id)arg1 codecName:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleInstallMobileAssetCallbackWithAsset:(id)arg1 UTI:(id)arg2 codecName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareInformationForLookups;
- (void)_prepareInformationForLookups;
- (void)_installMobileAssetAsUserInitiated:(BOOL)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAssetQueryCallbackWithAsset:(id)arg1 error:(id)arg2 userInitiated:(BOOL)arg3;
- (void)_handleAssetDownloadProgressWithAsset:(id)arg1 error:(id)arg2;
- (void)_processPendingCallbacksWithAsset:(id)arg1;
- (id)_init;
- (id)init;

@end
