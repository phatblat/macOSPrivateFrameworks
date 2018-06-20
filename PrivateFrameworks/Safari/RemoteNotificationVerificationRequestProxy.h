//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/RemoteNotificationCenterRequest.h>

@class NSArray, NSDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface RemoteNotificationVerificationRequestProxy : RemoteNotificationCenterRequest
{
    id <RemoteNotificationVerificationRequestProxyDelegate> _delegate;
    NSURL *_referrerURL;
    NSURL *_apiURL;
    NSString *_bundleDownloadPath;
    NSURLSession *_remoteBundleDownloadSession;
    NSOperationQueue *_remoteBundleVerificationOperationQueue;
    BOOL _performingVerificationTest;
    NSDictionary *_queryParameters;
    unsigned long long _requestID;
    NSArray *_allowedDomains;
}

@property(readonly, nonatomic) NSArray *allowedDomains; // @synthesize allowedDomains=_allowedDomains;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
- (void).cxx_destruct;
- (void)_handshakeDidPassWithWebsiteName:(id)arg1 lowResIcon:(id)arg2 highResIcon:(id)arg3;
- (void)_handshakeDidFailWithErrorMessage:(id)arg1;
- (void)_moveFilesIntoPlaceFromPath:(id)arg1 websiteData:(id)arg2 allowedDomains:(id)arg3;
- (void)_verifyBundleContents:(id)arg1 bundleVersion:(long long)arg2;
- (void)_verifyReferrerURLAndAllowedDomains:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_createNotificationBundleForExtractedPackage:(id)arg1 atBundleDestination:(id)arg2 withDisplayName:(id)arg3;
- (BOOL)_createICNSFileInExtractedPackage:(id)arg1;
- (BOOL)_cleanlyCreateNotificationBundleForExtractedPackage:(id)arg1 withDisplayName:(id)arg2;
- (BOOL)_verifySignature:(id)arg1;
- (id)_hashStringForFileWithName:(id)arg1 path:(id)arg2 manifest:(id)arg3 bundleVersion:(long long)arg4;
- (id)_expectedHashForFilename:(id)arg1 manifest:(id)arg2 bundleVersion:(long long)arg3;
- (BOOL)_verifyManifestHashes:(id)arg1 bundleVersion:(long long)arg2;
- (void)centerDelegateDidFinishRequest:(id)arg1;
- (void)createNotificationBundleFromPath:(id)arg1 displayName:(id)arg2;
- (id)_bundleDownloadPathWithTemporaryLocation:(id)arg1;
- (void)_downloadFirstValidRemoteNotificationBundleWithAPIVersions:(id)arg1;
- (void)startHandshake;
- (id)initWithWebsiteIdentifier:(id)arg1 apiURL:(id)arg2 referrerURL:(id)arg3 requestID:(unsigned long long)arg4 delegate:(id)arg5;

@end

