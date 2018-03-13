//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SafeNSProcInfoProtocol.h"

@class NSArray, NSString;

@interface NSProcInfo : NSObject <SafeNSProcInfoProtocol>
{
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    int _cpuType;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (int)processParentId:(int)arg1;
+ (BOOL)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (BOOL)isRunning;
- (int)cpuType;
- (void)update;
- (unsigned int)task;
- (int)ppid;
- (int)pid;
- (id)description;
- (id)name;
- (id)userAppName;
- (id)firstArgument;
- (id)requestedAppName;
- (id)realAppName;
- (id)_nameFromCommandLine:(int)arg1;
- (id)procTableName;
- (id)envVars;
- (struct timeval)startTime;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPid:(int)arg1;
- (id)init;

@end

