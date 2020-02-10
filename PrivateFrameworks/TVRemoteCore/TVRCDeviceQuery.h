//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface TVRCDeviceQuery : NSObject
{
    id <TVRCDeviceQueryDelegate> _delegate;
}

+ (void)fetchActiveEndpointUIDWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_allDiscoveredDevicesDidUpdate:(id)arg1;
+ (id)_allDiscoveredDevices;
@property(nonatomic) __weak id <TVRCDeviceQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
@property(readonly, copy, nonatomic) NSSet *devices;
- (void)dealloc;

@end
