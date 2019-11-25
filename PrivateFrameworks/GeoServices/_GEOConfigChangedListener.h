//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, _GEOConfigKeyHelper;

__attribute__((visibility("hidden")))
@interface _GEOConfigChangedListener : NSObject
{
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    id <GEOConfigChangeListenerDelegate> delegate;
}

+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
+ (id)listenerForKeyHelper:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <GEOConfigChangeListenerDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
@property(nonatomic) __weak _GEOConfigKeyHelper *keyHelper; // @synthesize keyHelper;
- (void).cxx_destruct;
- (id)description;
- (void)callListener;

@end

