//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, NSString, STUsageBlock;

@interface STUsageCategory : NSManagedObject
{
}

+ (id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1;
+ (id)categoryItemsExcludingSystemCategories:(id)arg1;

// Remaining properties
@property(retain, nonatomic) STUsageBlock *block; // @dynamic block;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *timedItems; // @dynamic timedItems;
@property(nonatomic) long long totalTimeInSeconds; // @dynamic totalTimeInSeconds;

@end

