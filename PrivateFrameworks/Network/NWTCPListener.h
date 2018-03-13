//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_tcp_listener>, NWEndpoint, NWParameters;

@interface NWTCPListener : NSObject
{
    NWEndpoint *_localEndpoint;
    NSError *_error;
    NSObject<OS_tcp_listener> *_internalListener;
    NWParameters *_parameters;
    NWEndpoint *_endpoint;
    id _delegate;
}

@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(retain) NSObject<OS_tcp_listener> *internalListener; // @synthesize internalListener=_internalListener;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NWEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (void)startInternal;
- (void)handleError:(int)arg1;
- (void)handleNewConnection:(id)arg1;

@end

