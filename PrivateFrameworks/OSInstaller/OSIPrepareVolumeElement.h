//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIPrepareVolumeElement : OSIInstallQueueElement
{
}

+ (id)virtualMemoryFolderName;
- (double)estimatedTimeToComplete;
- (id)_getBoardID;
- (void)_setSyrahBlackIfAppropriate;
- (BOOL)_enableCoreDumps;
- (BOOL)_activateVMOnDiskWithMountPoint:(id)arg1;
- (BOOL)_enableJournalingOnDiskIfDiskAllowsJournaling;
- (BOOL)_enablePermissions;
- (void)_fixUpACLs;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;

@end

