//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDServiceBroker;

@interface ASDDiagnosticService : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)pingWithError:(id *)arg1;
- (id)activeClientsWithError:(id *)arg1;
- (id)initWithServiceBroker:(id)arg1;

@end

