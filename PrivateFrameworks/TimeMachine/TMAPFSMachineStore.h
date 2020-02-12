//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeMachine/TMMachineStore.h>

#import "TMBackupStoreRoot.h"

@class NSString, NSURL, TMDisk, TMNodeCache, TMSidecarVolume;

@interface TMAPFSMachineStore : TMMachineStore <TMBackupStoreRoot>
{
    TMSidecarVolume *_sidecar;
    TMNodeCache *_nodeCache;
    TMDisk *_liveVolumeDisk;
}

+ (void)enumerateURLsForReuseUnderURL:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
+ (id)annotatedStateAtURL:(id)arg1;
+ (BOOL)_makeMachineStoreDirectoryAtURL:(id)arg1 error:(id *)arg2;
+ (id)URLForBuildUnderURL:(id)arg1 error:(id *)arg2;
+ (id)structureType;
@property(retain) TMDisk *liveVolumeDisk; // @synthesize liveVolumeDisk=_liveVolumeDisk;
@property __weak TMNodeCache *nodeCache; // @synthesize nodeCache=_nodeCache;
@property __weak TMSidecarVolume *sidecar; // @synthesize sidecar=_sidecar;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)tearDownSidecar:(id *)arg1;
- (id)prepareSidecarForBrowsing:(id *)arg1;
@property(readonly) NSURL *liveVolumeMountPoint;
- (id)sortedWritableBackupsWithState:(unsigned long long)arg1;
- (Class)snapshotClass;
- (BOOL)_updateMachineStoreNameAtURL:(id)arg1 error:(id *)arg2;
- (id)completedBackups;
- (long long)refreshFromDisk;
- (BOOL)prepareForReuse:(id *)arg1;
- (BOOL)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id *)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

