//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSSet, PAMicrostackshotData;

@interface PAStackshot : NSObject
{
    NSData *_traceBufData;
    unsigned long long _startOffset;
    double _machTimestamp;
    double _wallTimestamp;
    PAMicrostackshotData *_microstackshotData;
    NSSet *_deadPids;
}

@property(readonly) NSSet *deadPids; // @synthesize deadPids=_deadPids;
@property(readonly) PAMicrostackshotData *microstackshotData; // @synthesize microstackshotData=_microstackshotData;
@property(readonly) double wallTimestamp; // @synthesize wallTimestamp=_wallTimestamp;
@property(readonly) double machTimestamp; // @synthesize machTimestamp=_machTimestamp;
- (void).cxx_destruct;
- (BOOL)iterateTasks:(CDUnknownBlockType)arg1;
- (id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3;
@property(readonly) BOOL isMicrostackshot;

@end

