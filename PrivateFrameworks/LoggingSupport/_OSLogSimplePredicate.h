//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateVisitor.h"

@class NSMutableArray, NSPredicate, NSSet;

__attribute__((visibility("hidden")))
@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor>
{
    NSSet *_keys;
    NSSet *_operators;
    NSMutableArray *_stack;
    NSPredicate *_predicate;
}

@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (BOOL)isSupportedExpression:(id)arg1;
- (id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3;

@end

