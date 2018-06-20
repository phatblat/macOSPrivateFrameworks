//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SafeEjectGPU : NSObject
{
    struct __GPUWrangler *_wrangler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_array;
}

+ (void)fallbackGPUEjectPolicy:(_Bool)arg1;
- (id)newSessionWithGPUID:(unsigned long long)arg1;
- (id)gpus;
- (void)dealloc;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1 andChangeHandler:(CDUnknownBlockType)arg2;
- (void)teardown;

@end

