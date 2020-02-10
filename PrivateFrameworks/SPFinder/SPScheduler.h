//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMXPCServiceDescription, FMXPCSession, NSObject<OS_dispatch_queue>;

@interface SPScheduler : NSObject
{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPSchedulerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPSchedulerXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
- (void).cxx_destruct;
- (void)publishImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)schedulePublishWakeWithInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteInterface;
- (void)dealloc;
- (id)init;

@end
