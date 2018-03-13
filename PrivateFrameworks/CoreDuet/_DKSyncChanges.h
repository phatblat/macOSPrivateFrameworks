//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface _DKSyncChanges : NSObject
{
    NSArray *_additionChangeSets;
    NSArray *_deletionChangeSets;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *deletionChangeSets; // @synthesize deletionChangeSets=_deletionChangeSets;
@property(readonly, nonatomic) NSArray *additionChangeSets; // @synthesize additionChangeSets=_additionChangeSets;
- (void).cxx_destruct;
- (id)initWithAdditionChangeSets:(id)arg1 deletionChangeSets:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

