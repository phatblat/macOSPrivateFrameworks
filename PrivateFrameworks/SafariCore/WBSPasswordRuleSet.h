//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WBSAllowedPasswordRule, WBSMaxConsecutivePasswordRule, WBSMaxLengthPasswordRule, WBSMinLengthPasswordRule;

@interface WBSPasswordRuleSet : NSObject
{
    WBSAllowedPasswordRule *_allowedRule;
    NSArray *_requiredRules;
    WBSMaxConsecutivePasswordRule *_maxConsecutiveRule;
    WBSMinLengthPasswordRule *_minLengthRule;
    WBSMaxLengthPasswordRule *_maxLengthRule;
}

+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;
+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3;
@property(readonly, nonatomic) WBSMaxLengthPasswordRule *maxLengthRule; // @synthesize maxLengthRule=_maxLengthRule;
@property(readonly, nonatomic) WBSMinLengthPasswordRule *minLengthRule; // @synthesize minLengthRule=_minLengthRule;
@property(readonly, nonatomic) WBSMaxConsecutivePasswordRule *maxConsecutiveRule; // @synthesize maxConsecutiveRule=_maxConsecutiveRule;
@property(readonly, copy, nonatomic) NSArray *requiredRules; // @synthesize requiredRules=_requiredRules;
@property(readonly, nonatomic) WBSAllowedPasswordRule *allowedRule; // @synthesize allowedRule=_allowedRule;
- (void).cxx_destruct;
- (id)initWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;

@end

