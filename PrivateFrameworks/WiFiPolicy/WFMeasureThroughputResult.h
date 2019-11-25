//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFMeasureResult.h"

@class NSError, NSString;

@interface WFMeasureThroughputResult : NSObject <WFMeasureResult>
{
    NSError *_error;
    double _downlinkThroughput;
}

@property(readonly, nonatomic) double downlinkThroughput; // @synthesize downlinkThroughput=_downlinkThroughput;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithResult:(double)arg1 andError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

