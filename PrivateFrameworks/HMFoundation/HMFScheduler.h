//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMFScheduler : HMFObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)mainScheduler;
+ (id)defaultScheduler;
- (void).cxx_destruct;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (id)performWithQualityOfService:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)performBlock:(CDUnknownBlockType)arg1;
- (id)performOperation:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end
