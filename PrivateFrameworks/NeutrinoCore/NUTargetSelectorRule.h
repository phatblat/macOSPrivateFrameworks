//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURule.h>

@interface NUTargetSelectorRule : NURule
{
    CDUnknownFunctionPointerType _predicate;
    CDUnknownFunctionPointerType _action;
    id _target;
    SEL _predicateSelector;
    SEL _actionSelector;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) SEL actionSelector; // @synthesize actionSelector=_actionSelector;
@property(readonly, nonatomic) SEL predicateSelector; // @synthesize predicateSelector=_predicateSelector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)performActionWithSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3;
- (id)init;
- (void)_defaultAction:(id)arg1;
- (BOOL)_defaultPredicate:(id)arg1;

@end
