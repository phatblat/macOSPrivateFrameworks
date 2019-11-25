//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFFileStorageService.h"

@class NSString;

@interface WFDropboxStorageService : NSObject <WFFileStorageService>
{
}

+ (Class)resultItemClass;
+ (id)serviceName;
@property(readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;
@property(readonly, nonatomic) NSString *storageLocationPrefix;
@property(readonly, nonatomic) Class accessResourceClass;
@property(readonly, nonatomic) Class objectRepresentationClass;
@property(readonly, nonatomic) BOOL hasPublicURLs;
- (void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createFolderAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteFiles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)saveFiles:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 progress:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)finishRetrievalWithContentsOfFolderAtPath:(id)arg1 sessionManager:(id)arg2 retrievalHandler:(CDUnknownBlockType)arg3;
- (void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

