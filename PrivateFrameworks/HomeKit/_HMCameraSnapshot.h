//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _HMCameraSnapshot : _HMCameraSource
{
    NSDate *_captureDate;
}

@property(readonly, copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 captureDate:(id)arg6;

@end

