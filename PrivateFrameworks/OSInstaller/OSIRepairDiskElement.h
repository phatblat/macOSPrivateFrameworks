//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSError;

@interface OSIRepairDiskElement : OSIInstallQueueElement
{
    BOOL _repairCompleted;
    NSError *_error;
}

@property BOOL repairCompleted; // @synthesize repairCompleted=_repairCompleted;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (double)estimatedTimeToComplete;
- (BOOL)_isVolumeInComplexAPFSContainer:(id)arg1;
- (void)_disableQuotasForDiskWithMountPoint:(id)arg1;
- (id)_skManager;
- (id)_disksToUnmountForDisk:(id)arg1;
- (BOOL)_checkFilesystemAndRepair:(BOOL)arg1;
- (BOOL)_attemptVerify;
- (BOOL)_attemptRepair;
- (id)localizedStatusString;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;

@end

