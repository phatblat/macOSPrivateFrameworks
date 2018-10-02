//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFMessageReceiver.h"
#import "HMObjectMerge.h"

@class HMFUnfairLock, HMMediaSession, NSObject<OS_dispatch_queue>, NSString, NSUUID, _HMContext;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    BOOL _muted;
    float _volume;
    NSUUID *_uniqueIdentifier;
    HMMediaSession *_mediaSession;
    id <_HMAudioControlDelegate> _delegate;
    _HMContext *_context;
}

@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property __weak id <_HMAudioControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
- (void).cxx_destruct;
- (void)_handleAudioControlUpdated:(id)arg1;
- (void)updateMuted:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(getter=isMuted) BOOL muted; // @synthesize muted=_muted;
@property float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)__configureWithContext:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)initWithMediaSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

