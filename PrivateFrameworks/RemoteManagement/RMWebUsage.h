//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, RMUserDevicePairRecord, RMWebDomain;

@interface RMWebUsage : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) RMUserDevicePairRecord *sourceUserDevice; // @dynamic sourceUserDevice;
@property(copy, nonatomic) NSDate *usageEndDate; // @dynamic usageEndDate;
@property(copy, nonatomic) NSNumber *usageInSeconds; // @dynamic usageInSeconds;
@property(copy, nonatomic) NSDate *usageStartDate; // @dynamic usageStartDate;
@property(retain, nonatomic) RMWebDomain *webDomain; // @dynamic webDomain;
@end

