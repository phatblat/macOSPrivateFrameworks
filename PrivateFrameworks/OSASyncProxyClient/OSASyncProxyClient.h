//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface OSASyncProxyClient : NSObject
{
    NSXPCConnection *_connection;
    id <OSASyncProxyServices> _synchRemoteObjectProxy;
}

- (void).cxx_destruct;
- (void)listDevices:(CDUnknownBlockType)arg1;
- (void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (void)requestProxyMetadata:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 logList:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)init;

@end

