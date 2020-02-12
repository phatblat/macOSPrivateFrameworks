//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeMachine/TMMonoStructure.h>

@class NSString;

@interface TMSidecarVolume : TMMonoStructure
{
    NSString *_liveVolumeUUID;
}

+ (id)liveVolumeUUIDOnURL:(id)arg1;
+ (BOOL)setLiveVolumeUUID:(id)arg1 onURL:(id)arg2 error:(id *)arg3;
+ (id)liveVolumeNameOnURL:(id)arg1;
+ (BOOL)setLiveVolumeName:(id)arg1 onURL:(id)arg2 error:(id *)arg3;
+ (id)sidecarPasswordOnLiveVolume:(id)arg1;
+ (BOOL)setSidecarPassword:(id)arg1 onLiveVolume:(id)arg2 error:(id *)arg3;
+ (id)sidecarUUIDOnLiveVolume:(id)arg1;
+ (BOOL)setSidecarUUID:(id)arg1 onLiveVolume:(id)arg2 error:(id *)arg3;
+ (id)generateSidecarPasswordForURL:(id)arg1;
+ (id)generateSidecarNameForDataVolumeName:(id)arg1;
+ (id)sidecarMountURLWithLiveVolumeUUID:(id)arg1;
+ (BOOL)_tryToRepairDanglingSidecarReference:(id)arg1 dataVolumeURL:(id)arg2 containerRef:(struct __DADisk *)arg3 apfsManager:(id)arg4 diskManager:(id)arg5 error:(id *)arg6;
+ (BOOL)_buildAtURL:(id)arg1 parentURL:(id)arg2 diskManager:(id)arg3 apfsManager:(id)arg4 error:(id *)arg5;
+ (id)URLForBuildUnderURL:(id)arg1 error:(id *)arg2;
+ (id)annotatedStateAtURL:(id)arg1;
+ (id)_mountAtURL:(id)arg1 diskManager:(id)arg2 apfsManager:(id)arg3;
+ (id)makeAvailableAtURL:(id)arg1;
+ (id)readAtURL:(id)arg1 parent:(id)arg2 error:(id *)arg3;
+ (void)enumerateURLsForReuseUnderURL:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
+ (int)_mountArguments;
+ (id)structureType;
@property(copy) NSString *liveVolumeUUID; // @synthesize liveVolumeUUID=_liveVolumeUUID;
- (id)findLiveVolumeMountPoint;
- (BOOL)unmountPolitely:(id *)arg1;
- (void)dealloc;
- (BOOL)buildAtURL:(id)arg1 parentURL:(id)arg2 error:(id *)arg3;

@end

