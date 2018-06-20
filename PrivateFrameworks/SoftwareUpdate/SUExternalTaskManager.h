//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString, NSTask;

@interface SUExternalTaskManager : NSObject
{
    NSTask *_task;
    NSString *_logPrefix;
    BOOL _logOnlyStandardError;
    NSFileHandle *_outputReadHandle;
    NSString *_partialLine;
}

- (void)_flushTaskOutput;
- (BOOL)_processTaskOutput:(id)arg1;
- (void)_readTaskOutput:(id)arg1;
- (int)run;
- (void)dealloc;
- (id)initWithTask:(id)arg1 logWithPrefix:(id)arg2;
- (id)initTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 logWithPrefix:(id)arg3;

@end

