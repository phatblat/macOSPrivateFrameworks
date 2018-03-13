//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOAccelMemorySurfaceInfo, NSArray, NSDictionary, NSSet;

@interface IOAccelMemoryInfo : NSObject
{
    NSDictionary *dict;
    id _expansionData;
}

+ (void)purgeAllVidMem;
+ (void)validateDictionary:(id)arg1;
+ (void)newKernelAllocationTotals:(id)arg1 totalsReturn:(id)arg2 errorReturn:(id)arg3;
+ (id)newKernelAllocationList:(id)arg1;
+ (void)collectAllocationTotalsWithOptions:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)collectDataWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *formattedDescriptions;
- (id)description;
@property(readonly) NSArray *openclObjects;
@property(readonly) NSArray *openglObjects;
@property(readonly) NSArray *mappings;
@property(readonly) IOAccelMemorySurfaceInfo *surfaceDescription;
- (id)blamedProcessesForProcess:(int)arg1;
@property(readonly) NSSet *blamedProcesses;
@property(readonly) NSSet *processIDs;
@property(readonly) unsigned int surfaceID;
@property(readonly) NSArray *devices;
@property(readonly) BOOL wired;
@property(readonly) BOOL orphaned;
@property(readonly) BOOL purgeable;
@property(readonly) BOOL cacheDirty;
@property(readonly) BOOL cachedCopy;
@property(readonly) unsigned long long residentLength;
@property(readonly) unsigned long long dirtyLength;
@property(readonly) unsigned long long length;
@property(readonly) unsigned long long memoryPool;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

