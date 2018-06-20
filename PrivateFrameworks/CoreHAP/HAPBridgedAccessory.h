//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import "HAPAccessoryServerInternalDelegate.h"

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>
{
    HAPCharacteristic *_reachabilityCharacteristic;
}

@property(nonatomic) __weak HAPCharacteristic *reachabilityCharacteristic; // @synthesize reachabilityCharacteristic=_reachabilityCharacteristic;
- (void).cxx_destruct;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (BOOL)shouldMergeObject:(id)arg1;
- (BOOL)mergeWithAccessory:(id)arg1;
- (BOOL)__parseBridgeService:(id)arg1;
- (BOOL)__parseServices;
- (BOOL)__isReachable;
- (void)setReachable:(BOOL)arg1;
- (BOOL)isPrimary;
- (id)shortDescription;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

