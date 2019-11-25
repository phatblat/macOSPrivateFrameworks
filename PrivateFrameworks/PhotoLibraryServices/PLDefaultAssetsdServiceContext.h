//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetsdServiceContext.h"

@class NSError, NSString, NSXPCConnection, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundle;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext>
{
    SEL _selector;
    NSXPCConnection *_connection;
    PLPhotoLibraryBundle *_libraryBundle;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSError *_replyWarning;
}

@property(copy, nonatomic) NSError *replyWarning; // @synthesize replyWarning=_replyWarning;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clientDebugDescription;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property(readonly, nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
- (id)libraryServicesManager;
- (id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

