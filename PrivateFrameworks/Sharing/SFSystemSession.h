//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, SFDevice, SFSession, SFSessionRequestInfo;

@interface SFSystemSession : NSObject
{
    SFSessionRequestInfo *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _pairVerifyDone;
    struct NSMutableArray *_requests;
    SFSession *_sfSession;
    int _state;
    BOOL _stateDone;
    NSError *_stateError;
    BOOL _allowUnencrypted;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
}

@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL allowUnencrypted; // @synthesize allowUnencrypted=_allowUnencrypted;
- (void).cxx_destruct;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installProfileWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProfileWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSystemInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processRequestsWithError:(id)arg1;
- (void)_processRequests;
- (void)_runPairVerifyStart;
- (void)_runSFSessionStart;
- (void)_run;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (id)init;

@end

