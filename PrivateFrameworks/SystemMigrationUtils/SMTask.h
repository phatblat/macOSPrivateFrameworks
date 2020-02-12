//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSObject<OS_dispatch_queue>, NSProgress, NSString, NSTask;

@interface SMTask : NSObject
{
    int _terminationStatus;
    NSTask *_task;
    NSString *_logPrefix;
    double _estimatedTimeToComplete;
    NSProgress *_parentProgress;
    double _parentProgressPendingUnits;
    NSObject<OS_dispatch_queue> *_parentProgressQueue;
    NSFileHandle *_outputFileHandle;
}

@property(retain) NSFileHandle *outputFileHandle; // @synthesize outputFileHandle=_outputFileHandle;
@property(retain) NSObject<OS_dispatch_queue> *parentProgressQueue; // @synthesize parentProgressQueue=_parentProgressQueue;
@property double parentProgressPendingUnits; // @synthesize parentProgressPendingUnits=_parentProgressPendingUnits;
@property(retain) NSProgress *parentProgress; // @synthesize parentProgress=_parentProgress;
@property double estimatedTimeToComplete; // @synthesize estimatedTimeToComplete=_estimatedTimeToComplete;
@property int terminationStatus; // @synthesize terminationStatus=_terminationStatus;
@property(retain) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(retain) NSTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)fileHandleReadCompleted:(id)arg1;
- (void)processOutput:(id)arg1;
- (void)processRemainingData;
- (BOOL)run;
- (id)sipSanitizedTaskFromTask:(id)arg1;
- (id)initWithTask:(id)arg1 allowSIP:(BOOL)arg2;
- (id)initWithTask:(id)arg1;

@end

