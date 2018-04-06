//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, WBSCyclerPrimaryDeviceCoordinator;

@protocol WBSCyclerPrimaryDeviceCoordinatorDelegate <NSObject>

@optional
- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didReceiveData:(NSData *)arg2 fromSecondaryDevice:(unsigned long long)arg3;
- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)primaryDeviceCoordinatorDidConnectToAllSecondaryDevices:(WBSCyclerPrimaryDeviceCoordinator *)arg1;
- (void)primaryDeviceCoordinator:(WBSCyclerPrimaryDeviceCoordinator *)arg1 didStartListeningForSecondaryDevicesOnPort:(unsigned long long)arg2;
@end
