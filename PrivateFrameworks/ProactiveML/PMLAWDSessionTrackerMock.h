//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker
{
    NSMutableArray *_internalTrackedSessions;
    NSArray *_trackedSessions;
}

@property(readonly) NSArray *trackedSessions; // @synthesize trackedSessions=_trackedSessions;
- (void).cxx_destruct;
- (void)clearTrackedSessions;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

