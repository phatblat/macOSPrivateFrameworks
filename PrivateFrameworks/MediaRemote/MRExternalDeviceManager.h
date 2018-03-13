//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSPointerArray;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void)clearDevices;
- (void)registerDevice:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allDevices;
- (void)dealloc;
- (id)init;

@end

