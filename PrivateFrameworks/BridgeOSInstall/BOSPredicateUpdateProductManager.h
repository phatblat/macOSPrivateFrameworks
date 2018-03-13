//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSUProduct, MSUProductManager, NSArray, NSDictionary, NSError, NSNumber, NSObject<OS_dispatch_semaphore>, NSURL, PKDistribution;

@interface BOSPredicateUpdateProductManager : NSObject
{
    MSUProduct *_product;
    NSDictionary *_macOSInstallationAuxInfo;
    MSUProductManager *_productManager;
    NSError *_error;
    NSURL *_catalogURLOverride;
    unsigned long long _catalogOptionsOverride;
    NSNumber *_stagedUpdatesOnlyOverride;
    NSObject<OS_dispatch_semaphore> *_downloaderFinished;
    CDUnknownBlockType _downloadProgressHandler;
    NSArray *_localPackageSpecifiers;
}

@property(retain) NSArray *localPackageSpecifiers; // @synthesize localPackageSpecifiers=_localPackageSpecifiers;
@property(copy) CDUnknownBlockType downloadProgressHandler; // @synthesize downloadProgressHandler=_downloadProgressHandler;
@property(retain) NSObject<OS_dispatch_semaphore> *downloaderFinished; // @synthesize downloaderFinished=_downloaderFinished;
@property(retain) NSNumber *stagedUpdatesOnlyOverride; // @synthesize stagedUpdatesOnlyOverride=_stagedUpdatesOnlyOverride;
@property unsigned long long catalogOptionsOverride; // @synthesize catalogOptionsOverride=_catalogOptionsOverride;
@property(retain) NSURL *catalogURLOverride; // @synthesize catalogURLOverride=_catalogURLOverride;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) MSUProductManager *productManager; // @synthesize productManager=_productManager;
@property(retain) NSDictionary *macOSInstallationAuxInfo; // @synthesize macOSInstallationAuxInfo=_macOSInstallationAuxInfo;
@property(retain) MSUProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (BOOL)_downloadPackagesForProductToDirectory:(id)arg1;
- (BOOL)_findProductMatchingPredicate:(id)arg1;
- (BOOL)_evaluateProductsInCatalogWithPredicate:(id)arg1;
- (BOOL)_loadCatalog;
- (BOOL)_shouldEvaluateStagedUpdatesOnly;
- (id)_findProductPredicate;
- (id)_catalogEvaluationPredicate;
- (void)downloadProductToDirectory:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findProductWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStagedUpdatesOnly:(BOOL)arg1;
@property(readonly) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL;
@property(readonly) PKDistribution *distribution;
@property(readonly) NSArray *remotePackageSpecifiers;
- (id)init;
- (void)packageDownloader:(id)arg1 didDownloadInvalidDataForPackageReference:(id)arg2;
- (void)packageDownloader:(id)arg1 didFailOnPackageReference:(id)arg2 withError:(id)arg3;
- (void)packageDownloader:(id)arg1 didFinishPackageReference:(id)arg2 localPackageReference:(id)arg3;
- (void)packageDownloader:(id)arg1 didStartDownloadingPackageWithReference:(id)arg2;
- (void)packageDownloader:(id)arg1 didChangeProgress:(double)arg2;
- (void)packageDownloaderDidStop:(id)arg1;
- (void)packageDownloaderDidStart:(id)arg1;
- (void)_setCatalogURL:(id)arg1 isDevelopmentCatalog:(BOOL)arg2;

@end

