//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CPAnalyticsEventMatcherSet : NSObject
{
    NSMutableDictionary *_matchers;
}

@property(readonly, nonatomic) NSMutableDictionary *matchers; // @synthesize matchers=_matchers;
- (void).cxx_destruct;
- (BOOL)hasMatchForEvent:(id)arg1;
- (BOOL)registerMatcher:(id)arg1;
- (id)init;

@end
