//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL, SMSystem_Daemon;

@interface SMPathsUserHomeSizer : NSObject
{
    NSURL *_cacheLocation;
    SMSystem_Daemon *_system;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain) SMSystem_Daemon *system; // @synthesize system=_system;
@property(retain) NSURL *cacheLocation; // @synthesize cacheLocation=_cacheLocation;
- (void).cxx_destruct;
- (unsigned long long)latestFSEventForHome:(id)arg1 since:(unsigned long long)arg2;
- (BOOL)user:(id)arg1 needsSizeUpdated:(id)arg2 latestEvent:(unsigned long long *)arg3;
- (unsigned long long)calculateSizeForUser:(id)arg1;
- (unsigned long long)sizeForUser:(id)arg1;
- (void)sizeUsers:(id)arg1 recalculationPermitted:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithSystem:(id)arg1;

@end

