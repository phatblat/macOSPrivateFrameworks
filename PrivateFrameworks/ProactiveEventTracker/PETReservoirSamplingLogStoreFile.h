//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PETReservoirSamplingLogStore.h"

@class NSString;

@interface PETReservoirSamplingLogStoreFile : NSObject <PETReservoirSamplingLogStore>
{
    NSString *_path;
    void *_ptr;
    unsigned long long _mapLen;
    int _fd;
}

- (void).cxx_destruct;
- (BOOL)attemptToRecreate;
- (BOOL)appendData:(id)arg1 andReturnMapPointer:(struct **)arg2;
- (BOOL)changeLength:(unsigned long long)arg1;
- (CDStruct_39420a03 *)headerMap:(unsigned long long *)arg1;
- (CDStruct_39420a03 *)remap:(unsigned long long *)arg1;
- (void)_unmap;
- (unsigned long long)currentLength;
- (void)unlock;
- (BOOL)lock;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
