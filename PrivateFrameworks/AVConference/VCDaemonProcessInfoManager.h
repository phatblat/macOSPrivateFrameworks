//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
- (id)copyProcessInfo;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

