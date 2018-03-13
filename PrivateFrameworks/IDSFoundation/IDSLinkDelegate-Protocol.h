//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, NSUUID;

@protocol IDSLinkDelegate <NSObject>
- (BOOL)link:(id)arg1 didReceivePacket:(CDStruct_bc1e3e42 *)arg2 fromDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;

@optional
- (void)link:(id)arg1 didReceiveReportEvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(BOOL)arg2 currentDefaultLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(NSUUID *)arg3;
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(NSUUID *)arg3 localAttributes:(NSDictionary *)arg4 remoteAttributes:(NSDictionary *)arg5;
- (void)link:(id)arg1 didReceiveSKEData:(NSData *)arg2;
- (void)link:(id)arg1 didDisconnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didFailToConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 hostAwakeDidChange:(BOOL)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
@end

