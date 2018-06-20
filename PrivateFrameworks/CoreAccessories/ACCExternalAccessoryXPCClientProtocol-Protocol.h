//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>
- (void)updateAccessoryInfo:(NSDictionary *)arg1 forUUID:(NSString *)arg2;
- (void)vehicleStatusUpdate:(NSDictionary *)arg1 forUUID:(NSString *)arg2;
- (void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(NSString *)arg2 supportedParams:(NSArray *)arg3 forUUID:(NSString *)arg4;
- (void)stopDestinationSharingForUUID:(NSString *)arg1;
- (void)startDestinationSharingForUUID:(NSString *)arg1;
- (void)enqueueLocationNMEASentence:(NSString *)arg1 forUUID:(NSString *)arg2;
- (void)accessoryCloseExternalAccessorySession:(NSString *)arg1;
- (void)handleIncomingExternalAccessoryData:(NSData *)arg1 forEASessionIdentifier:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)ExternalAccessoryLeft:(NSDictionary *)arg1;
- (void)ExternalAccessoryArrived:(NSDictionary *)arg1;
@end

