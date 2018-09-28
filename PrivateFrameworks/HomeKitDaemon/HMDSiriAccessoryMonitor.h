//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;
    NSMapTable *_accessories;
}

@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(BOOL)arg2;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;
- (void)_removeAccessory:(id)arg1;
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;
- (id)_accessoriesTargetingAccessory:(id)arg1;
- (BOOL)hasAnyActiveTargetingAccessories;
- (id)_getInfoForAccessory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

