//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PMLTrainingLogEntry : NSObject
{
    double _timestamp;
    unsigned long long _serverIteration;
}

@property(readonly) unsigned long long serverIteration; // @synthesize serverIteration=_serverIteration;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;

@end

