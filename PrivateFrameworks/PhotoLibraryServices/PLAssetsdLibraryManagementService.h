//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetsdLibraryManagementServiceProtocol.h"

@class NSString, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLPhotoLibraryBundleController *_bundleController;
}

- (void).cxx_destruct;
- (void)getPhotoLibraryURLsWithReply:(CDUnknownBlockType)arg1;
- (void)getActivePhotoLibrariesWithReply:(CDUnknownBlockType)arg1;
- (void)_disableCloudServicesInPhotoLibraryBundle:(id)arg1 withReason:(id)arg2;
- (void)setSystemPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 options:(unsigned short)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

