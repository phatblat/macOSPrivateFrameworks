//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CPAnalyticsEventMatcher : NSObject
{
    NSString *_eventKeyToMatch;
    NSDictionary *_eventPropertiesToMatch;
    NSArray *_conditionalChecks;
}

@property(retain, nonatomic) NSArray *conditionalChecks; // @synthesize conditionalChecks=_conditionalChecks;
@property(readonly, nonatomic) NSDictionary *eventPropertiesToMatch; // @synthesize eventPropertiesToMatch=_eventPropertiesToMatch;
@property(readonly, nonatomic) NSString *eventKeyToMatch; // @synthesize eventKeyToMatch=_eventKeyToMatch;
- (void).cxx_destruct;
- (id)_validateAndParseConditionalChecks:(id)arg1;
- (id)_validateAndParseEventProperties:(id)arg1;
- (id)_validateAndParseEventKey:(id)arg1;
- (BOOL)doesMatch:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

