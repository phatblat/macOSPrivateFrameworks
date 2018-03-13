//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKDevice, NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface AKAnisetteProvisioningController : NSObject
{
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    AKDevice *_targetDevice;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
}

@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property(retain, nonatomic) AKDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 error:(id *)arg2;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)anisetteDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)anisetteDataForURLRequest:(id)arg1 error:(id *)arg2;
- (id)anisetteDataWithError:(id *)arg1;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1 provider:(id)arg2;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end

