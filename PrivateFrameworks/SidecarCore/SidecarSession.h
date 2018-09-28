//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SidecarDevice, SidecarService;

@interface SidecarSession : NSObject
{
    id <SidecarSessionDelegate> _delegate;
    SidecarDevice *_device;
    SidecarService *_service;
    long long _handle;
    NSError *_error;
    unsigned int _remote:1;
    // Error parsing type: AB, name: _invalid
}

- (void).cxx_destruct;
- (void)invalidateWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connect;
- (_Bool)_invalidate;
- (void)setError:(id)arg1;
@property(nonatomic) __weak id <SidecarSessionDelegate> delegate;
@property(readonly, nonatomic) SidecarService *service;
@property(readonly, nonatomic) SidecarDevice *device;
- (void)dealloc;
- (id)initWithService:(id)arg1 device:(id)arg2;
- (id)initWithRemoteHandle:(long long)arg1;

@end

