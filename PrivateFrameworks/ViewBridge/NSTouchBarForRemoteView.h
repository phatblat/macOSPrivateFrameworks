//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTouchBar.h"

@class NSString, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface NSTouchBarForRemoteView : NSTouchBar
{
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    NSString *_serviceName;
}

@property(readonly) NSXPCListenerEndpoint *serviceListenerEndpoint; // @synthesize serviceListenerEndpoint=_serviceListenerEndpoint;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)initWithServiceBarIdentifier:(id)arg1 remoteView:(id)arg2;
- (void)dealloc;

@end
