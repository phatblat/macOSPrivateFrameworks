//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, RPCloudServer, RPCloudSession;

@protocol RPCloudXPCDaemonInterface
- (void)xpcCloudSendFrameData:(NSData *)arg1 destinationID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)xpcCloudSessionActivate:(RPCloudSession *)arg1 completion:(void (^)(unsigned int, NSError *))arg2;
- (void)xpcCloudServerActivate:(RPCloudServer *)arg1 completion:(void (^)(NSError *))arg2;
@end

