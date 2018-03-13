//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AFAudioPowerUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id <AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
    id <AFAudioPowerProviding> _provider;
    long long _frequency;
}

@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) id <AFAudioPowerProviding> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (float)_unsafePeakPower;
- (float)_unsafeAveragePower;
- (id)_createNewXPCWrapper;
- (void)_createNewXPCWrapperWithCompletion:(CDUnknownBlockType)arg1;
- (void)_destroySharedMemory;
- (void)_writeSharedMemoryWithAveragePower:(float)arg1 peakPower:(float)arg2;
- (id)_createSharedMemoryXPCObject;
- (BOOL)_createSharedMemory;
- (void)_invalidate;
- (void)_updatePowerWithAveragePower:(float)arg1 andPeakPower:(float)arg2;
- (void)_getPowerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_timerFired;
- (void)_endUpdate;
- (void)_beginUpdate;
- (void)createNewXPCWrapperWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)endUpdate;
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginUpdate;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 frequency:(long long)arg3 delegate:(id)arg4;

@end

