//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface EOSPreflightContainerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_repositoryQueue;
    NSString *_customRepositoryPath;
}

+ (id)sharedManager;
@property(retain) NSString *customRepositoryPath; // @synthesize customRepositoryPath=_customRepositoryPath;
@property(retain) NSObject<OS_dispatch_queue> *repositoryQueue; // @synthesize repositoryQueue=_repositoryQueue;
- (void).cxx_destruct;
- (BOOL)_savePreflightContainer:(id)arg1;
- (id)_loadPreflightContainerFromURL:(id)arg1;
- (id)_preflightContainerRepositoryURL;
- (id)_allPreflightContainerURLs;
- (id)_allPreflightContainers;
- (void)purgePreflightContainers;
- (BOOL)savePreflightContainer:(id)arg1;
- (BOOL)preflightContainerExists;
- (id)preflightContainerWithTag:(id)arg1;
- (id)preflightContainerForRestoreBundle:(id)arg1;
- (id)init;
- (void)_setCustomRepositoryPath:(id)arg1;

@end
