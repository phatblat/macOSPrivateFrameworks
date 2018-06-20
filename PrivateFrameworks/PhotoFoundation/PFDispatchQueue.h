//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFDispatchQueue : NSObject
{
}

+ (void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 ofBlock:(CDUnknownBlockType)arg3;
+ (void)dispatchApply:(unsigned long long)arg1 ofBlock:(CDUnknownBlockType)arg2;
+ (id)globalCurrentQOSQueue;
+ (id)globalQOSQueue:(unsigned int)arg1;
+ (id)globalBackgroundQOSQueue;
+ (id)globalUtilityQOSQueue;
+ (id)globalDefaultQOSQueue;
+ (id)globalUserInitiatedQOSQueue;
+ (id)globalUserInteractiveQOSQueue;
+ (id)mainQueue;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2 qos:(unsigned int)arg3;
+ (id)newQueueWithLabel:(id)arg1 concurrencyLimit:(unsigned long long)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newConcurrentQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newConcurrentQueueWithLabel:(id)arg1;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)newSerialQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newSerialQueueWithLabel:(id)arg1;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3 extensions:(id)arg4;
+ (id)injectedExtensions;
+ (id)newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2;
+ (id)newQueueWithLabel:(id)arg1;
+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;
+ (Class)concreteQueueClass;
+ (void)initialize;
- (id)_init;

@end

