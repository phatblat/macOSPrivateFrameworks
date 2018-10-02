//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKStandingQuery.h"

@class NSString;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery>
{
    NSString *queryIdentifier;
}

@property(retain, nonatomic) NSString *queryIdentifier; // @synthesize queryIdentifier;
- (void).cxx_destruct;
- (id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2;
- (id)fetchResultWithReferenceDate:(id)arg1 withStorage:(id)arg2;
- (id)fetchResultFromStorage:(id)arg1;
- (id)fetchResultForDayOfWeek:(long long)arg1;
- (id)fetchResult;
- (void)executeWithStorage:(id)arg1 referenceDate:(id)arg2;
- (id)histogramForDate:(id)arg1 withReference:(id)arg2 andUpdate:(id)arg3;
- (void)executeWithStorage:(id)arg1;
- (id)_predicateForDeletedEventsWithReferenceDate:(id)arg1;
- (long long)_computeSlotForDate:(id)arg1;
- (id)_customIdentifierForDayOfWeek:(long long)arg1;
- (double)_deviceActivityEphemerality;
- (id)init;

@end

