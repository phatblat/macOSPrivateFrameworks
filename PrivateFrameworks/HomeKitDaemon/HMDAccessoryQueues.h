//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject
{
    NSMutableDictionary *queues;
}

@property(retain, nonatomic) NSMutableDictionary *queues; // @synthesize queues;
- (void).cxx_destruct;
- (id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2;
- (int)countForQueue:(id)arg1;
- (id)whichQueueForAccessory:(id)arg1;
- (BOOL)_inQueue:(id)arg1 queue:(id)arg2;
- (id)popAccessoryFromQueue:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (id)getContextForAccessory:(id)arg1;
- (void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3;
- (BOOL)createQueue:(id)arg1;
- (id)init;
- (void)enumerateQueue:(id)arg1 enumerateAccessory:(CDUnknownBlockType)arg2;

@end

