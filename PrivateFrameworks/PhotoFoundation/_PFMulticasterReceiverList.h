//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject
{
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
    SEL _selector;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasReceivers;
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;

@end

