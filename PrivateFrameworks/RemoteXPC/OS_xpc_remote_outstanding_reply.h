//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface OS_xpc_remote_outstanding_reply : NSObject
{
    unsigned long long msg_id;
    CDUnknownBlockType reply_handler;
    NSObject<OS_dispatch_queue> *reply_queue;
    OS_xpc_remote_outstanding_reply *next;
}

- (void).cxx_destruct;

@end

