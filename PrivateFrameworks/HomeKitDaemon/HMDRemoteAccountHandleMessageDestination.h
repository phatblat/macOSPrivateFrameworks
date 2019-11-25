//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDAccountHandle, NSDictionary;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination
{
    BOOL _multicast;
    HMDAccountHandle *_handle;
    NSDictionary *_deviceCapabilities;
}

+ (id)shortDescription;
@property(readonly, copy) NSDictionary *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(readonly, getter=isMulticast) BOOL multicast; // @synthesize multicast=_multicast;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (id)remoteDestinationString;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 deviceCapabilities:(id)arg4;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3;
- (id)initWithTarget:(id)arg1;

@end

