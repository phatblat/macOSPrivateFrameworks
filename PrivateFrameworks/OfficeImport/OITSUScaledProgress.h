//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class NSObject<OS_dispatch_queue>, OITSUScaledProgressStorage;

@interface OITSUScaledProgress : OITSUProgress
{
    OITSUScaledProgressStorage *mStorage;
    OITSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)isIndeterminate;
@property double maxValue;
- (double)value;
@property(retain) OITSUProgress *progress;
- (void)dealloc;
- (id)init;

@end

