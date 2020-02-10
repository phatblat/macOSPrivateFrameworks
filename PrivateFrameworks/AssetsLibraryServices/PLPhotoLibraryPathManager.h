//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLPhotoLibraryPathManager.h"

@class NSString, NSURL, PLFileSystemCapabilities, PLPhotoLibraryPathManagerCore;

@interface PLPhotoLibraryPathManager : NSObject <PLPhotoLibraryPathManager>
{
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
}

+ (BOOL)isSystemLibraryURLDefined;
+ (BOOL)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (id)systemLibraryBaseDirectory;
+ (id)systemLibraryURL;
+ (BOOL)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (void)assertSingleLibraryMode;
+ (void)enableMultiLibraryMode;
+ (BOOL)isMultiLibraryModeEnabled;
+ (void)throwMultiLibraryAPIMisuse;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)createTimeMachineExclusionPathsWithError:(id *)arg1;
- (id)timeMachineExclusionPathForPathType:(unsigned char)arg1;
- (void)enumerateBundleScopesWithBlock:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setOrCompareLibraryURL:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned char)arg2;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *assetUUIDRecoveryMappingPath;
@property(readonly, copy) NSString *baseDirectory;
@property(readonly, nonatomic) PLFileSystemCapabilities *capabilities;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *libraryURL;
@property(readonly) Class superclass;

@end
