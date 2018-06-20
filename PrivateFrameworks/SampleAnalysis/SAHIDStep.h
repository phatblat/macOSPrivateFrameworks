//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SATimestamp;

@interface SAHIDStep : NSObject
{
    unsigned int _debugid;
    int _pid;
    SATimestamp *_timestamp;
    unsigned long long _tid;
}

+ (id)hidStepWithDebugId:(unsigned int)arg1 pid:(int)arg2 tid:(unsigned long long)arg3;
+ (id)hidStepWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
@property(readonly) unsigned long long tid; // @synthesize tid=_tid;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(retain) SATimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) unsigned int debugid; // @synthesize debugid=_debugid;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithKTraceEvent:(struct trace_point *)arg1 fromSession:(struct ktrace_session *)arg2;
- (id)initWithTimestamp:(id)arg1 debugID:(unsigned int)arg2 pid:(int)arg3 tid:(unsigned long long)arg4;

@end

