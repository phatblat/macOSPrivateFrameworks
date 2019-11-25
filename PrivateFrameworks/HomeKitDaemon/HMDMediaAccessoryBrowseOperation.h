//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFOperation.h"

#import "HMFLogging.h"

@class HMDMediaEndpoint, NSArray, NSString;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging>
{
    id <HMFLocking> _lock;
    void *_session;
    unsigned int _endpointFeatures;
    HMDMediaEndpoint *_endpoint;
    NSArray *_outputDevices;
    NSString *_accessoryIdentifier;
}

+ (id)logCategory;
+ (double)defaultTimeout;
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
@property(readonly) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property unsigned int endpointFeatures; // @synthesize endpointFeatures=_endpointFeatures;
- (void)dealloc;
- (id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

