//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface MRAVRoutingDiscoverySession : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct NSMutableDictionary *_endpointsChangedCallbacks;
    struct NSMutableDictionary *_outputDevicesChangedCallbacks;
    BOOL _alwaysAllowUpdates;
}

+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
@property(nonatomic) BOOL alwaysAllowUpdates; // @synthesize alwaysAllowUpdates=_alwaysAllowUpdates;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (id)addOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;
- (id)addEndpointsChangedCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *outputDevicesChangedCallbacks;
@property(readonly, nonatomic) NSArray *endpointsChangedCallbacks;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
@property(readonly, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property(nonatomic) unsigned int discoveryMode; // @dynamic discoveryMode;
@property(readonly, nonatomic) unsigned int endpointFeatures; // @dynamic endpointFeatures;
@property(readonly, nonatomic) BOOL hasAvailableEndpoints; // @dynamic hasAvailableEndpoints;
@property(copy, nonatomic) NSString *routingContextUID; // @dynamic routingContextUID;
@property(nonatomic) unsigned int targetAudioSessionID; // @dynamic targetAudioSessionID;

@end

