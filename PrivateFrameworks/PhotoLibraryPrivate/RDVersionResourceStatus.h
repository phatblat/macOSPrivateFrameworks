//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RDVersionResourceStatus : NSObject
{
    unsigned long long _numberOfImagesSyncing;
    unsigned long long _numberOfVideosSyncing;
    unsigned long long _numberOfItemsSyncing;
    unsigned long long _numberOfMastersDownloading;
    unsigned long long _numberOfMastersUploading;
    unsigned long long _numberOfReferencedVersions;
    unsigned long long _numberOfNonReferencedVersionsWithSyncFailure;
    unsigned long long _numberOfFailedVersions;
    unsigned long long _numberOfViewedFailedVersions;
}

@property unsigned long long numberOfViewedFailedVersions; // @synthesize numberOfViewedFailedVersions=_numberOfViewedFailedVersions;
@property unsigned long long numberOfFailedVersions; // @synthesize numberOfFailedVersions=_numberOfFailedVersions;
@property unsigned long long numberOfNonReferencedVersionsWithSyncFailure; // @synthesize numberOfNonReferencedVersionsWithSyncFailure=_numberOfNonReferencedVersionsWithSyncFailure;
@property unsigned long long numberOfReferencedVersions; // @synthesize numberOfReferencedVersions=_numberOfReferencedVersions;
@property unsigned long long numberOfMastersUploading; // @synthesize numberOfMastersUploading=_numberOfMastersUploading;
@property unsigned long long numberOfMastersDownloading; // @synthesize numberOfMastersDownloading=_numberOfMastersDownloading;
@property unsigned long long numberOfItemsSyncing; // @synthesize numberOfItemsSyncing=_numberOfItemsSyncing;
@property unsigned long long numberOfVideosSyncing; // @synthesize numberOfVideosSyncing=_numberOfVideosSyncing;
@property unsigned long long numberOfImagesSyncing; // @synthesize numberOfImagesSyncing=_numberOfImagesSyncing;
- (id)description;

@end

