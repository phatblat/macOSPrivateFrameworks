//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMCSOperationMetric.h"

@class NSArray, NSDate, NSMutableArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface MMCSOperationMetric : NSObject <MMCSOperationMetric>
{
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
    NSMutableSet *_requestUUIDs;
    NSDate *_startDate;
    double _duration;
    NSMutableArray *_ranges;
}

@property(retain, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) NSMutableSet *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
- (void).cxx_destruct;
- (double)absoluteStop;
- (long long)compareExecutingStartTime:(id)arg1;
- (long long)compareStartTime:(id)arg1;
- (double)other;
- (double)absoluteStart;
@property(readonly, copy) NSString *description;
- (id)describeRanges;
@property(readonly) NSArray *rangesCopy;
- (void)rangesCompleted;
- (void)addRange:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

