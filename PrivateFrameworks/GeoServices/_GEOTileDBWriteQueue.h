//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOTileDB, NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface _GEOTileDBWriteQueue : NSObject
{
    unsigned long long _maxOperations;
    unsigned long long _maxOperationsSizeInBytes;
    NSMutableArray *_pendingOperations;
    GEOTileDB *_db;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _pendingSizeInBytes;
}

- (void).cxx_destruct;
- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(char *)arg4;
- (void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1;
- (void)prunePendingOperationsSupercededByOperation:(id)arg1;
- (void)dropAllPendingOperations;
- (void)_flushPendingOperations;
- (void)flushPendingOperations:(BOOL)arg1;
- (void)addOperation:(id)arg1;
- (id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3;

@end

