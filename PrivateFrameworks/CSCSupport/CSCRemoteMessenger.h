//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, OS_remote_device, OS_remote_service;

@interface CSCRemoteMessenger : NSObject
{
    NSObject<OS_os_log> *logger;
    OS_remote_device *device;
    OS_remote_service *service;
    NSObject<OS_dispatch_queue> *_dq;
}

+ (id)createErrorWithCode:(int)arg1 message:(const char *)arg2;
@property(retain, nonatomic) OS_remote_service *service; // @synthesize service;
@property(retain, nonatomic) OS_remote_device *device; // @synthesize device;
@property(retain, nonatomic) NSObject<OS_os_log> *logger; // @synthesize logger;
- (void).cxx_destruct;
- (_Bool)sendRemoteMessage:(id)arg1 withReply:(id *)arg2 error:(id *)arg3;
- (_Bool)setRemoteDevice:(unsigned int)arg1 service:(const char *)arg2 error:(id *)arg3;
- (id)init;

@end

