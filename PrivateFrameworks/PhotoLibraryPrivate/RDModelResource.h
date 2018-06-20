//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelResourceModel.h>

@class NSString;

@interface RDModelResource : RDModelResourceModel
{
    NSString *_temporaryFileUuid;
    BOOL _temporaryFileAccessedForWrite;
}

+ (void)deleteStaleModelsWithLibrary:(id)arg1 withReason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)deleteResourcesFromModelResources:(id)arg1 withReason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)masterModelResourceFilterForVersionIdsToDelete:(id)arg1 resourceType:(unsigned char)arg2 resourceTag:(id)arg3 database:(id)arg4;
+ (void)deleteModelResourcesForModel:(id)arg1 resourceTag:(id)arg2 withReason:(unsigned short)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteWithAttachedIds:(id)arg1 modelType:(short)arg2 resourceType:(unsigned char)arg3 database:(id)arg4 withReason:(unsigned short)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (BOOL)deleteResourceFromURL:(id)arg1 database:(id)arg2;
+ (id)modelResourceForModel:(id)arg1 type:(unsigned char)arg2 resourceTag:(id)arg3 loadProperties:(id)arg4;
+ (id)modelResourceForModel:(id)arg1 type:(unsigned char)arg2 resourceTag:(id)arg3;
+ (id)modelResourceIdListForModel:(id)arg1 type:(unsigned char)arg2 resourceTag:(id)arg3 groupIdentifierTag:(id)arg4;
+ (id)modelResourceIdListForModel:(id)arg1 type:(unsigned char)arg2;
+ (void)copyModelResourcesFromModel:(id)arg1 toModel:(id)arg2 type:(unsigned char)arg3 excludingTypes:(id)arg4;
+ (id)resourceFilterForModel:(id)arg1 type:(unsigned char)arg2 resourceTag:(id)arg3 groupIdentifierTag:(id)arg4;
+ (void)unRecoverModelResourcesWithCloudResoures:(id)arg1;
+ (void)repairUnMigratedResoucesWithRepair:(id)arg1;
+ (void)cleanupStaleTemporaryDirectoriesWithRepair:(id)arg1;
+ (void)registerRepairBlocks:(id)arg1;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 forTable:(id)arg2;
- (CDUnknownBlockType)willPersist;
- (CDUnknownBlockType)willBeDeleted:(BOOL)arg1;
- (BOOL)convertToReferencedResourceURL:(id)arg1 volumeId:(long long)arg2 error:(id *)arg3;
- (BOOL)convertToManagedResource;
- (id)fileVolume;
- (id)bookmark;
- (void)obtainAccess:(unsigned char)arg1 toURLWithHandler:(CDUnknownBlockType)arg2;
- (id)urlWithMode:(unsigned char)arg1 forceTemporary:(BOOL)arg2 error:(id *)arg3;
- (void)updateUrlPropertyChangeWithHandler:(CDUnknownBlockType)arg1;
- (void)setUTI:(id)arg1;
- (id)validateUTI:(id)arg1;
- (void)setResourceType:(long long)arg1;
- (void)setAttachedModelType:(long long)arg1;
@property(retain, nonatomic) NSString *uuid;
- (short)modelType;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (id)initWithAttachedModel:(id)arg1 resourceType:(unsigned char)arg2 uti:(id)arg3 resourceTag:(id)arg4;
- (void)writeAccessUpdateForURL:(id)arg1;
- (id)initWithResourceType:(unsigned char)arg1 attachedModelType:(short)arg2 attachedModelId:(unsigned long long)arg3 uti:(id)arg4 forTable:(id)arg5;
- (void)legacyObtainAccessToURLWithHandler:(CDUnknownBlockType)arg1;
- (id)legacyUrlWithError:(id *)arg1;

@end

