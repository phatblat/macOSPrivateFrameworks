//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface DDLogMessage : NSObject
{
    int logLevel;
    int logFlag;
    int logContext;
    NSString *logMsg;
    NSDate *timestamp;
    char *file;
    char *function;
    int lineNumber;
    unsigned int machThreadID;
    char *queueLabel;
    NSString *threadName;
    id tag;
    int options;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)methodName;
- (id)fileName;
- (id)threadID;
- (id)initWithLogMsg:(id)arg1 level:(int)arg2 flag:(int)arg3 context:(int)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(int)arg7 tag:(id)arg8 options:(int)arg9;

@end

