//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PFMemoryInfo <NSObject>
@property(readonly) NSString *memoryNote;
@property(readonly) void *rawBytes;
@property(readonly) unsigned long long capacity;
@property(readonly) unsigned long long accessCount;
@property(readonly) int purgeState;
@property(readonly) int purgeLevel;
@end

