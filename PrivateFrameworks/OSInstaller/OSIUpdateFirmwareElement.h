//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSArray, OSIPersonalizedManifests;

@interface OSIUpdateFirmwareElement : OSIInstallQueueElement
{
    BOOL _firmwareUpdatesQueued;
    NSArray *_packageSpecifiers;
    OSIPersonalizedManifests *_personalizedManifests;
}

+ (BOOL)shouldUpdateFirmware;
+ (BOOL)cookieExists;
@property(retain) OSIPersonalizedManifests *personalizedManifests; // @synthesize personalizedManifests=_personalizedManifests;
@property BOOL firmwareUpdatesQueued; // @synthesize firmwareUpdatesQueued=_firmwareUpdatesQueued;
@property(retain) NSArray *packageSpecifiers; // @synthesize packageSpecifiers=_packageSpecifiers;
- (void)purgeCachesOnEFIDisk:(id)arg1;
- (id)internalEFIDisk;
- (void)repairESP;
- (void)cleanUpESP;
- (id)nextProgressPhaseAfterCompletion;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (id)createTempDirectoryAtMutableProductURL:(id)arg1;
- (id)createTempDirectoryForMountPoint:(id)arg1;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 packageSpecifiers:(id)arg2 personalizedManifests:(id)arg3;

@end

