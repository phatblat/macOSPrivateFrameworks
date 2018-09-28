//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL, SUMetadataCache, SUProduct;

@interface SUProductLoadOperation : NSOperation
{
    NSString *_productKey;
    NSURL *_distributionURL;
    NSData *_distributionData;
    NSDate *_postDate;
    NSDictionary *extraInfo;
    BOOL shouldBuildCacheOnly;
    SUMetadataCache *metadataCache;
    NSDictionary *distributionEnv;
    NSURL *sourceCatalogURL;
    SUProduct *_product;
    NSError *_error;
    BOOL checkForMacBuddyInstallableTag;
    NSDictionary *_distributionEvaluationMetainfo;
}

@property(retain) NSDictionary *distributionEvaluationMetainfo; // @synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo;
@property BOOL checkForMacBuddyInstallableTag; // @synthesize checkForMacBuddyInstallableTag;
@property(retain) NSURL *sourceCatalogURL; // @synthesize sourceCatalogURL;
@property(retain) NSDictionary *distributionEnv; // @synthesize distributionEnv;
@property(retain) SUMetadataCache *metadataCache; // @synthesize metadataCache;
@property BOOL shouldBuildCacheOnly; // @synthesize shouldBuildCacheOnly;
@property(retain) NSDictionary *extraInfo; // @synthesize extraInfo;
- (id)error;
- (id)product;
- (BOOL)_isValidChoice:(id)arg1;
- (BOOL)applyIntegrityDataByPackageURL:(id)arg1;
- (BOOL)applyPKMDataByPackageURL:(id)arg1;
- (BOOL)evaluateProductReturningEvalMessages:(id *)arg1 predicateScan:(BOOL)arg2 evaluateOnly:(BOOL)arg3;
- (BOOL)evaluateProductForPredicateScan:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProductKey:(id)arg1 distributionURL:(id)arg2 distributionData:(id)arg3 postDate:(id)arg4;

@end

