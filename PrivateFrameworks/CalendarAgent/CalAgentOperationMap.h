//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface CalAgentOperationMap : NSObject
{
    NSMapTable *_map;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property(retain, nonatomic) NSMapTable *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (id)copyLinkedOperationForOperationWithName:(id)arg1 inputPayload:(id)arg2;
- (void)load;
- (id)description;

@end

