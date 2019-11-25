//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSExtensionRequestHandling.h"

@class FPXExtensionContext, NSFileProviderDomain, NSFileProviderRequest, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling>
{
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    FPXExtensionContext *_extensionContext;
    NSFileProviderRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSURL *_memberQueueDocumentStorageURL;
    NSString *_memberQueueProviderIdentifier;
    NSFileProviderDomain *_domain;
}

+ (BOOL)_initializedByViewServices;
+ (id)_relativeComponentsOfURL:(id)arg1 fromBaseURL:(id)arg2;
+ (id)_resourceIDOfURL:(id)arg1 outError:(id *)arg2;
+ (id)placeholderURLForURL:(id)arg1;
+ (BOOL)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *memberQueueProviderIdentifier; // @synthesize memberQueueProviderIdentifier=_memberQueueProviderIdentifier;
@property(retain, nonatomic) NSURL *memberQueueDocumentStorageURL; // @synthesize memberQueueDocumentStorageURL=_memberQueueDocumentStorageURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void).cxx_destruct;
- (id)currentRequest;
- (void)_withRequest:(id)arg1 execute:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)unregisterUpdateHandlerForPersistentIdentifier:(id)arg1;
- (void)registerUpdateHandlerForPersistentIdentifier:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 usingExistingContentsAtURL:(id)arg3 existingVersion:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchContentsForItemWithIdentifier:(id)arg1 version:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)itemChanged:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 contents:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)evictItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)itemForIdentifier:(id)arg1 error:(id *)arg2;
- (void)stopProvidingItemAtURL:(id)arg1;
- (void)itemChangedAtURL:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (id)documentStorageURL;
- (id)providerIdentifier;
- (void)invalidate;
- (id)init;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)disconnectWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchPublishingURLForItemIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)trashItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fetchThumbnailsForItemIdentifiers:(id)arg1 requestedSize:(struct CGSize)arg2 perThumbnailCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)supportedServiceSourcesForItemIdentifier:(id)arg1 error:(id *)arg2;
- (id)enumeratorForSearchQuery:(id)arg1 error:(id *)arg2;
- (id)enumeratorForContainerItemIdentifier:(id)arg1 error:(id *)arg2;
- (void)materializedItemsDidChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 contents:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteItemWithIdentifier:(id)arg1 baseVersion:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)importDidFinishWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

