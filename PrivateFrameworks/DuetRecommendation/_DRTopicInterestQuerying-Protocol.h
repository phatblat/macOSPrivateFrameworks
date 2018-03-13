//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSPredicate, NSString, _DRTopicInterestSummary;

@protocol _DRTopicInterestQuerying
+ (NSPredicate *)predicateForTopicInteractionsAfter:(NSDate *)arg1;
+ (NSPredicate *)predicateForTopicsWithPrefix:(NSString *)arg1;
- (void)enumerateTopicCountsWithFilter:(NSPredicate *)arg1 block:(void (^)(NSString *, unsigned long long, unsigned long long, char *))arg2;
- (_DRTopicInterestSummary *)computeSummaryWithFilter:(NSPredicate *)arg1;
@end

