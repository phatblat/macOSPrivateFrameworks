//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFileProviderItem.h"
#import "NSFileProviderItem_Private.h"
#import "NSSecureCoding.h"

@class FPItemID, NSArray, NSData, NSDate, NSDictionary, NSError, NSNumber, NSPersonNameComponents, NSProgress, NSString, NSURL;

@interface FPItem : NSObject <NSFileProviderItem_Private, NSFileProviderItem, NSCopying, NSSecureCoding>
{
    NSProgress *_progress;
    NSArray *_tags;
    BOOL _downloading;
    BOOL _mostRecentVersionDownloaded;
    BOOL _uploaded;
    BOOL _uploading;
    BOOL _trashed;
    BOOL _shared;
    BOOL _sharedByCurrentUser;
    BOOL _supportsMostRecentVersionDownloaded;
    BOOL _offline;
    BOOL _isUbiquitous;
    BOOL _isContainer;
    BOOL _hidden;
    BOOL _downloaded;
    BOOL _pending;
    NSString *_itemIdentifier;
    NSString *_domainIdentifier;
    NSString *_parentItemIdentifier;
    NSDate *_contentModificationDate;
    NSError *_downloadingError;
    NSError *_uploadingError;
    NSNumber *_childItemCount;
    unsigned long long _capabilities;
    NSDictionary *_userInfo;
    NSNumber *_documentSize;
    NSDate *_creationDate;
    NSString *_typeIdentifier;
    NSData *_versionIdentifier;
    NSPersonNameComponents *_ownerNameComponents;
    NSPersonNameComponents *_mostRecentEditorNameComponents;
    NSNumber *_isDownloadRequested;
    NSString *_sharingPermissions;
    NSString *_containerDisplayName;
    NSString *_filename;
    NSString *_appContainerBundleIdentifier;
    NSString *_preformattedOwnerName;
    NSString *_preformattedMostRecentEditorName;
    NSString *_formerIdentifier;
    NSNumber *_hasUnresolvedConflicts;
    NSURL *_fileURL;
    NSString *_spotlightDomainIdentifier;
    unsigned long long _state;
    NSString *_placeholdIdentifier;
    NSArray *_hierarchyPath;
    NSString *_displayName;
    NSNumber *_favoriteRank;
    NSDate *_lastUsedDate;
    NSString *_providerIdentifier;
}

+ (id)allUbiquitousResourceKeys;
+ (BOOL)supportsSecureCoding;
+ (id)placeholderWithName:(id)arg1 isFolder:(BOOL)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProvider:(id)arg5;
+ (id)placeholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProvider:(id)arg4;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)arg1;
+ (id)generatePlaceholderIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isDownloaded) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property(copy, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(copy, nonatomic) NSNumber *favoriteRank; // @synthesize favoriteRank=_favoriteRank;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *hierarchyPath; // @synthesize hierarchyPath=_hierarchyPath;
@property(nonatomic) NSString *placeholdIdentifier; // @synthesize placeholdIdentifier=_placeholdIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *spotlightDomainIdentifier; // @synthesize spotlightDomainIdentifier=_spotlightDomainIdentifier;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSNumber *hasUnresolvedConflicts; // @synthesize hasUnresolvedConflicts=_hasUnresolvedConflicts;
@property(retain, nonatomic) NSString *formerIdentifier; // @synthesize formerIdentifier=_formerIdentifier;
@property(retain, nonatomic) NSString *preformattedMostRecentEditorName; // @synthesize preformattedMostRecentEditorName=_preformattedMostRecentEditorName;
@property(retain, nonatomic) NSString *preformattedOwnerName; // @synthesize preformattedOwnerName=_preformattedOwnerName;
@property(copy, nonatomic) NSString *appContainerBundleIdentifier; // @synthesize appContainerBundleIdentifier=_appContainerBundleIdentifier;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(nonatomic, getter=isUbiquitous) BOOL ubiquitous; // @synthesize ubiquitous=_isUbiquitous;
@property(nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
@property(nonatomic) BOOL supportsMostRecentVersionDownloaded; // @synthesize supportsMostRecentVersionDownloaded=_supportsMostRecentVersionDownloaded;
@property(readonly, nonatomic) NSString *containerDisplayName; // @synthesize containerDisplayName=_containerDisplayName;
@property(readonly, nonatomic) NSString *sharingPermissions; // @synthesize sharingPermissions=_sharingPermissions;
@property(readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property(retain, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents; // @synthesize mostRecentEditorNameComponents=_mostRecentEditorNameComponents;
@property(retain, nonatomic) NSPersonNameComponents *ownerNameComponents; // @synthesize ownerNameComponents=_ownerNameComponents;
@property(nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser; // @synthesize sharedByCurrentUser=_sharedByCurrentUser;
@property(nonatomic, getter=isShared) BOOL shared; // @synthesize shared=_shared;
@property(nonatomic, getter=isTrashed) BOOL trashed; // @synthesize trashed=_trashed;
@property(retain, nonatomic) NSData *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSNumber *documentSize; // @synthesize documentSize=_documentSize;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSNumber *childItemCount; // @synthesize childItemCount=_childItemCount;
@property(copy, nonatomic) NSError *uploadingError; // @synthesize uploadingError=_uploadingError;
@property(nonatomic, getter=isUploading) BOOL uploading; // @synthesize uploading=_uploading;
@property(nonatomic, getter=isUploaded) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(copy, nonatomic) NSError *downloadingError; // @synthesize downloadingError=_downloadingError;
@property(nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded; // @synthesize mostRecentVersionDownloaded=_mostRecentVersionDownloaded;
@property(nonatomic, getter=isDownloading) BOOL downloading; // @synthesize downloading=_downloading;
@property(copy, nonatomic) NSDate *contentModificationDate; // @synthesize contentModificationDate=_contentModificationDate;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier; // @synthesize parentItemIdentifier=_parentItemIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)_downloadingStatus;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)arg1;
@property(readonly, nonatomic) NSString *hierarchyPathKey;
@property(readonly, nonatomic) unsigned long long depthInHierarchy;
@property(readonly, nonatomic, getter=isCloudItem) BOOL cloudItem;
@property(readonly, nonatomic) NSProgress *copyingProgress;
@property(readonly, nonatomic) NSProgress *uploadingProgress;
@property(readonly, nonatomic) NSProgress *downloadingProgress;
- (void)setFp_SpotlightDomainIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *fp_spotlightDomainIdentifier;
- (long long)localizedStandardTagsCompare:(id)arg1;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) FPItemID *formerItemID;
@property(readonly, nonatomic) FPItemID *itemID;
@property(readonly, nonatomic) unsigned long long folderType;
@property(readonly, nonatomic) BOOL isFolder;
- (void)setParentItemIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property(readonly, nonatomic, getter=isWritable) BOOL writable;
@property(readonly, nonatomic, getter=isReadable) BOOL readable;
@property(readonly, nonatomic, getter=fp_isContainer) BOOL fp_isContainer;
@property(readonly, nonatomic, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property(readonly, nonatomic) NSString *fp_appContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *fp_domainIdentifier;
- (id)copyAsPending;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendorItem:(id)arg1 provider:(id)arg2 domain:(id)arg3;
- (id)initWithProvider:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 isDirectory:(BOOL)arg5;
- (id)initWithProvider:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 parentItemIdentifier:(id)arg4 filename:(id)arg5 typeIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSNumber *isDownloadRequested; // @synthesize isDownloadRequested=_isDownloadRequested;
@property(readonly) Class superclass;

@end

