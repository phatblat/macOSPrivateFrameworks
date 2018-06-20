//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (TSUAdditions)
+ (id)tsu_fileURLWithPath:(id)arg1;
@property(readonly, getter=tsu_isInTrash) BOOL tsu_inTrash;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (id)tsu_fileProviderBookmarkableString;
- (BOOL)tsu_isOnSameVolumeAs:(id)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (BOOL)tsu_isOnAPFSVolume;
- (BOOL)tsu_isOnForeignVolume;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (BOOL)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;
- (BOOL)tsu_shareOwnerName:(out id *)arg1 error:(id *)arg2;
- (id)tsu_shareOwnerName;
- (BOOL)tsu_isDocumentUploaded:(out char *)arg1 error:(id *)arg2;
- (BOOL)tsu_isDocumentUploaded;
- (BOOL)tsu_displayName:(out id *)arg1 error:(id *)arg2;
- (id)tsu_displayName;
- (BOOL)tsu_isShareOwner:(out char *)arg1 error:(id *)arg2;
- (BOOL)tsu_isShareOwner;
- (BOOL)tsu_isShareCollaborator:(out char *)arg1 error:(id *)arg2;
- (BOOL)tsu_isShareCollaborator;
- (BOOL)_isShareRole:(out char *)arg1 role:(id)arg2 error:(id *)arg3;
- (BOOL)tsu_isShared:(out char *)arg1 error:(id *)arg2;
- (BOOL)tsu_isShared;
- (BOOL)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;
- (unsigned long long)tsu_fileSize;
- (BOOL)tsu_isFileSizeTooLargeForSharing;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_documentIdentifier;
@end

