//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IconServices/ISStoreIndex.h>

@class NSObject<OS_dispatch_queue>;

@interface ISMutableStoreIndex : ISStoreIndex
{
    unsigned long long _initialCapacity;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) unsigned long long initialCapacity; // @synthesize initialCapacity=_initialCapacity;
- (void).cxx_destruct;
- (void)_extend;
- (void)removeAll;
- (BOOL)removeValueForKey:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)removeValuePassingTest:(CDUnknownBlockType)arg1;
- (BOOL)addValue:(CDStruct_dd73ed19 *)arg1 forKey:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)data;
- (id)initWithStoreFileURL:(id)arg1 capacity:(unsigned long long)arg2;

@end

