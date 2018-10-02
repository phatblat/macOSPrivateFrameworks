//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BOSDevice, BOSPredicateUpdateProductManager, MSUProduct, NSArray, NSString, NSURL, PKDistribution;

@interface BridgeOSInstallDownloader : NSObject
{
    BOSPredicateUpdateProductManager *_productManager;
    BOSDevice *_deviceForUnitTesting;
}

@property(retain) BOSDevice *deviceForUnitTesting; // @synthesize deviceForUnitTesting=_deviceForUnitTesting;
@property(retain) BOSPredicateUpdateProductManager *productManager; // @synthesize productManager=_productManager;
- (void).cxx_destruct;
- (unsigned long long)requirementSatisfiedForMinimumBridgeVersion:(id)arg1;
- (void)downloadProductToDirectory:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findProductWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDownloadCacheWithURL:(id)arg1;
- (void)setStagedUpdatesOnly:(BOOL)arg1;
- (void)setMacOSInstallationAuxInfo:(id)arg1;
- (void)setCatalogURL:(id)arg1 isDevelopmentCatalog:(BOOL)arg2;
@property(readonly) NSURL *bridgeOSSoftwareUpdateEventRecordingServiceURL;
@property(readonly) NSString *productBridgeVersion;
@property(readonly) MSUProduct *product;
@property(readonly) PKDistribution *distribution;
@property(readonly) NSArray *remotePackageSpecifiers;
- (id)init;
- (void)_setDeviceForUnitTesting:(id)arg1;

@end

