//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SIUFoundation/ProcessSourceOperation.h>

@interface ProcessVolumeOperation : ProcessSourceOperation
{
}

- (void)main;
- (BOOL)isAPFSVolume:(id)arg1;
- (id)baseSystemChunklistForRecoveryVolume:(id)arg1 withName:(id)arg2;
- (id)baseSystemForRecoveryVolume:(id)arg1 withName:(id)arg2;
- (id)recoveryPartitionForVolume:(id)arg1;
- (id)recoveryNameForVolume:(id)arg1;
- (id)booterPartitionForVolume:(id)arg1;
- (BOOL)pathIsServerOSVolume:(id)arg1;
- (BOOL)pathIsInstallMedia:(id)arg1;
- (id)mountRecordFromAttributes:(id)arg1;
- (void)addVolumeAttributesToDictionary:(id)arg1;

@end

