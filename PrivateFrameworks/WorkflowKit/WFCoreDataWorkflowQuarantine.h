//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString, WFCoreDataWorkflow;

@interface WFCoreDataWorkflowQuarantine : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *importDate; // @dynamic importDate;
@property(copy, nonatomic) NSString *sourceAppIdentifier; // @dynamic sourceAppIdentifier;
@property(retain, nonatomic) WFCoreDataWorkflow *workflow; // @dynamic workflow;

@end

