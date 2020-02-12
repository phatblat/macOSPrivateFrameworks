//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateVisitor.h"

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor>
{
    NSMutableDictionary *_filter;
    NSMutableDictionary *_pids;
    NSMutableDictionary *_processes;
    NSMutableDictionary *_processImagePaths;
    NSMutableDictionary *_subsystems;
    NSMutableDictionary *_categories;
}

- (void).cxx_destruct;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (unsigned long long)flagsForPredicate:(id)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3;
- (void)addCategory:(id)arg1 flags:(unsigned long long)arg2;
- (void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2;
- (void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2;
- (void)addProcess:(id)arg1 flags:(unsigned long long)arg2;
- (void)addProcessID:(id)arg1 flags:(unsigned long long)arg2;
@property(readonly, nonatomic) NSData *data;
- (id)initWithPredicate:(id)arg1;

@end

