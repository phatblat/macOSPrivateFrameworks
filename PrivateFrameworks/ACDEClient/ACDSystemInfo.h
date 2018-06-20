//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACMSystemInfoProtocol.h"

@class ACFFingerPrint, NSString;

@interface ACDSystemInfo : NSObject <ACMSystemInfoProtocol>
{
    ACFFingerPrint *_fingerPrint;
}

@property(readonly, nonatomic) BOOL isPreRelease;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) BOOL isRetailDevice; // @dynamic isRetailDevice;
@property(readonly, nonatomic) BOOL isTouchIDAvailable; // @dynamic isTouchIDAvailable;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property(readonly, nonatomic) NSString *IPAddress;
@property(readonly, nonatomic) NSString *MACAddress;
@property(readonly) ACFFingerPrint *fingerPrint;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) BOOL isRunningOnModernMobileSystem; // @dynamic isRunningOnModernMobileSystem;

@end
