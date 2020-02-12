//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLClientAuthorization.h"

@class NSSet, NSString;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization>
{
    CDStruct_4c969caf _auditToken;
    NSSet *_photoKitEntitlements;
    int _kTCCPhotosAuthorized;
    int _kTCCPhotosAddAuthorized;
    BOOL _libraryUpgradeAuthorized;
    BOOL _directDatabaseAccessAuthorized;
    BOOL _directDatabaseWriteAuthorized;
    BOOL _photoKitEntitled;
    int _clientProcessIdentifier;
    NSString *_trustedCallerBundleID;
    NSString *_trustedCallerDisplayName;
}

@property(readonly, nonatomic) BOOL photoKitEntitled; // @synthesize photoKitEntitled=_photoKitEntitled;
@property(readonly, nonatomic) NSString *trustedCallerBundleID; // @synthesize trustedCallerBundleID=_trustedCallerBundleID;
@property(readonly, nonatomic) int clientProcessIdentifier; // @synthesize clientProcessIdentifier=_clientProcessIdentifier;
- (void).cxx_destruct;
- (void)handleInvalidation;
- (BOOL)photoKitEntitledFor:(id)arg1;
@property(readonly, nonatomic) NSString *trustedCallerDisplayName; // @synthesize trustedCallerDisplayName=_trustedCallerDisplayName;
- (void)setupFromConnection:(id)arg1;
@property(readonly, nonatomic) CDStruct_4c969caf clientAuditToken;
- (BOOL)isPhotosClient;
@property(readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property(readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
- (BOOL)isClientAuthorizedForLibraryUpgrade;
- (BOOL)isClientAuthorizedForTCCServicePhotosAdd;
- (BOOL)isClientAuthorizedForTCCServicePhotos;
@property(readonly, copy) NSString *description;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

