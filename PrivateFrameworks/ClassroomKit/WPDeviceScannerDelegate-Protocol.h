//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, NSUUID, WPDeviceScanner;

@protocol WPDeviceScannerDelegate <NSObject>
- (void)deviceScannerDidUpdateState:(WPDeviceScanner *)arg1;

@optional
- (void)scanner:(WPDeviceScanner *)arg1 foundAnyDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)scanner:(WPDeviceScanner *)arg1 didFailToRegisterDevices:(NSDictionary *)arg2 withError:(NSError *)arg3;
- (void)scanner:(WPDeviceScanner *)arg1 foundRequestedDevices:(NSArray *)arg2;
- (void)scanner:(WPDeviceScanner *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
@end

