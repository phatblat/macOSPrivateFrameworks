//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PKDownloader, PKMutableProduct, PKPackageSourceManager, SKDisk;

@interface OSProductManager : NSObject
{
    PKPackageSourceManager *_sourceManager;
    PKMutableProduct *_mutableProduct;
    NSMutableArray *_allProducts;
    NSMutableDictionary *_attributes;
    int _maxValidInstallDistance;
    NSArray *_downloaderPackages;
    id _downloaderDelegate;
    PKDownloader *_downloader;
    NSMutableDictionary *_retryCountByPackageRef;
    NSString *_seedingProgramForTarget;
    SKDisk *_productDisk;
    NSString *_productPath;
}

+ (id)defaultProductManager;
@property(retain) NSString *productPath; // @synthesize productPath=_productPath;
@property(retain) SKDisk *productDisk; // @synthesize productDisk=_productDisk;
@property(retain) NSString *seedingProgramForTarget; // @synthesize seedingProgramForTarget=_seedingProgramForTarget;
- (void).cxx_destruct;
- (BOOL)flushAttributesDictionary;
- (id)attributesDictionary;
- (BOOL)packageReferenceHasValidInstallDistance:(id)arg1;
- (id)requiredPackageReferencesFromIdentifiersAndVersions:(id)arg1 missingPackages:(id *)arg2;
- (id)requiredPackageReferencesFromIdentifiersAndVersions:(id)arg1;
- (id)_requiredPackageReferencesFromIdentifiersAndVersions:(id)arg1 clearingInvalidation:(BOOL)arg2 missingPackages:(id *)arg3;
- (void)_tryAlternateSourceInvalidatingPackageReference:(id)arg1 reason:(int)arg2 error:(id)arg3;
- (unsigned long long)downloadSizeForPackageReferences:(id)arg1 allRemoteURLs:(char *)arg2;
- (void)_startDownloadingNeededPackagesAndNotify:(BOOL)arg1;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)downloadPackagesToMutableProduct:(id)arg1 withDelegate:(id)arg2;
- (BOOL)removeMutableProduct;
- (BOOL)pastPointOfNoReturn;
- (void)setPastPointOfNoReturn:(BOOL)arg1;
- (id)iaLogPath;
- (id)automationFilePath;
- (id)automationFilePathIfSafe;
- (BOOL)automationFileIsSafeWithError:(id *)arg1;
- (BOOL)setMutableProductPath:(id)arg1 error:(id *)arg2;
- (BOOL)addProduct:(id)arg1 distance:(int)arg2;
- (BOOL)_checkAndSetProductVersioning:(id)arg1;
- (id)productVersion;
- (id)productIdentifier;
- (void)setMaximumValidInstallDistance:(int)arg1;
- (int)maximumValidInstallDistance;
- (id)mutableProductPath;
- (id)mutableProduct;
- (id)sourceManager;
- (id)description;
- (id)init;
- (BOOL)packageDownloader:(id)arg1 shouldRetryFailedPackageReference:(id)arg2 previousError:(id)arg3;
- (void)packageDownloader:(id)arg1 didFinishPackageReference:(id)arg2 localPackageReference:(id)arg3;
- (void)packageDownloader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)packageDownloader:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)packageDownloader:(id)arg1 didDownloadInvalidDataForPackageReference:(id)arg2;
- (void)packageDownloader:(id)arg1 didFailOnPackageReference:(id)arg2 withError:(id)arg3;

@end

