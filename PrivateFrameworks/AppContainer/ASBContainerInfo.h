//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASBMutableContainer, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface ASBContainerInfo : NSObject
{
    unsigned long long _refCount;
    ASBMutableContainer *_container;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (unsigned long long)refCount;
- (unsigned long long)decrementRefCount;
- (void)incrementRefCount;
- (id)container;
- (id)queue;
- (void)dealloc;
- (id)initWithMutableContainer:(id)arg1 queueName:(id)arg2;

@end

