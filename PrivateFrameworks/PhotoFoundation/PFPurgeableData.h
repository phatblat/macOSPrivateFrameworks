//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableData.h"

#import "PFMemoryInfo.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface PFPurgeableData : NSMutableData <PFMemoryInfo>
{
    void *_bytes;
    unsigned long long _length;
    unsigned long long _capacity;
    unsigned long long _accessLevel;
    BOOL _copyAccessLevel;
    BOOL _contentsLost;
    BOOL _canCacheOnDisk;
    int _purgeLevel;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _recycle;
    NSString *_memoryNote;
}

+ (id)purgeStateToString:(int)arg1;
+ (id)purgeLevelToString:(int)arg1;
+ (void)_checkVMError:(int)arg1 function:(const char *)arg2;
+ (id)allInstances;
@property BOOL recycle; // @synthesize recycle=_recycle;
@property(retain) NSString *memoryNote; // @synthesize memoryNote=_memoryNote;
- (void).cxx_destruct;
- (void)endAccess;
- (void)beginAccess:(CDUnknownBlockType)arg1;
- (BOOL)beginAccess;
- (BOOL)resetLRUValue;
@property(readonly) int purgeLevel;
- (BOOL)setPurgeLevel:(int)arg1;
@property(readonly) int purgeState;
@property(readonly) unsigned long long accessCount;
@property BOOL canCacheOnDisk;
@property(readonly, copy) NSString *description;
- (void)setLength:(unsigned long long)arg1;
@property(readonly) void *rawBytes;
- (void *)mutableBytes;
- (const void *)bytes;
@property(readonly) unsigned long long capacity;
- (unsigned long long)length;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (int)_OSValueToPurgeState:(int)arg1;
- (BOOL)_setBlockFIFO:(int)arg1;
- (BOOL)_restoreBlockPurgeLevel;
- (BOOL)_markBlockUnpurgeable;
- (void)_deallocateMemory:(void *)arg1 capacity:(unsigned long long)arg2;
- (void *)_allocateMemory:(unsigned long long)arg1 newCapacity:(unsigned long long *)arg2;
- (void)_logPurgeState;
- (int)_purgeLevelToOSValue:(int)arg1;
- (void)_checkAccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

