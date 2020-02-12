//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPAnalyticsDestination.h"

@class CPAnalytics, NSMutableDictionary;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination>
{
    CPAnalytics *_cpAnalyticsInstance;
    NSMutableDictionary *_startTimesBySignpostID;
}

@property(retain, nonatomic) NSMutableDictionary *startTimesBySignpostID; // @synthesize startTimesBySignpostID=_startTimesBySignpostID;
@property(nonatomic) __weak CPAnalytics *cpAnalyticsInstance; // @synthesize cpAnalyticsInstance=_cpAnalyticsInstance;
- (void).cxx_destruct;
- (void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3;
- (void)_checkSignpostsEndForEvent:(id)arg1;
- (void)_trackSignpostsStartForEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end

