//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface TSClock : NSObject
{
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    unsigned long long _clockIdentifier;
}

+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1;
+ (unsigned long long)_mach_absolute_time;
@property(nonatomic) unsigned long long clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSString *clockName; // @dynamic clockName;
@property(readonly, nonatomic) double hostRateRatio; // @dynamic hostRateRatio;
@property(readonly, nonatomic) int lockState; // @dynamic lockState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @dynamic notificationQueue;
@property(readonly, retain, nonatomic) NSMutableArray *clients; // @dynamic clients;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (BOOL)getRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 withError:(id *)arg5;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (BOOL)convertFromDomainTime:(unsigned long long *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)arg1 toDomainTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (id)init;

@end

