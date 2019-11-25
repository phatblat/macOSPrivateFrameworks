//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SAFrameIterator.h"

@class NSArray, NSString, SAFrame, SAKernelFrame, SAKernelLeafFrame, SALeafFrame, SASharedCache, SAUserTruncatedBacktrace;

__attribute__((visibility("hidden")))
@interface SAFrameKCDataIterator : NSObject <SAFrameIterator>
{
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    SAUserTruncatedBacktrace *_truncatedBacktrace;
    BOOL _hideKernelFrames;
    BOOL _hideUserFrames;
    BOOL _isUserStackTruncated;
    int _numUser64Frames;
    int _numUser64LRs;
    int _numUser32Frames;
    int _numUser32LRs;
    int _numKernel64Frames;
    int _numKernel64LRs;
    int _numKernel32Frames;
    int _numKernel32LRs;
    NSArray *_userBinaryLoadInfos;
    NSArray *_kernelBinaryLoadInfos;
    SASharedCache *_sharedCache;
    struct stack_snapshot_frame64 *_user64Frames;
    unsigned long long *_user64LRs;
    struct stack_snapshot_frame32 *_user32Frames;
    unsigned int *_user32LRs;
    struct stack_snapshot_frame64 *_kernel64Frames;
    unsigned long long *_kernel64LRs;
    struct stack_snapshot_frame32 *_kernel32Frames;
    unsigned int *_kernel32LRs;
    unsigned long long _continuation;
}

@property BOOL isUserStackTruncated; // @synthesize isUserStackTruncated=_isUserStackTruncated;
@property unsigned long long continuation; // @synthesize continuation=_continuation;
@property int numKernel32LRs; // @synthesize numKernel32LRs=_numKernel32LRs;
@property unsigned int *kernel32LRs; // @synthesize kernel32LRs=_kernel32LRs;
@property int numKernel32Frames; // @synthesize numKernel32Frames=_numKernel32Frames;
@property struct stack_snapshot_frame32 *kernel32Frames; // @synthesize kernel32Frames=_kernel32Frames;
@property int numKernel64LRs; // @synthesize numKernel64LRs=_numKernel64LRs;
@property unsigned long long *kernel64LRs; // @synthesize kernel64LRs=_kernel64LRs;
@property int numKernel64Frames; // @synthesize numKernel64Frames=_numKernel64Frames;
@property struct stack_snapshot_frame64 *kernel64Frames; // @synthesize kernel64Frames=_kernel64Frames;
@property int numUser32LRs; // @synthesize numUser32LRs=_numUser32LRs;
@property unsigned int *user32LRs; // @synthesize user32LRs=_user32LRs;
@property int numUser32Frames; // @synthesize numUser32Frames=_numUser32Frames;
@property struct stack_snapshot_frame32 *user32Frames; // @synthesize user32Frames=_user32Frames;
@property int numUser64LRs; // @synthesize numUser64LRs=_numUser64LRs;
@property unsigned long long *user64LRs; // @synthesize user64LRs=_user64LRs;
@property int numUser64Frames; // @synthesize numUser64Frames=_numUser64Frames;
@property struct stack_snapshot_frame64 *user64Frames; // @synthesize user64Frames=_user64Frames;
@property(retain) SASharedCache *sharedCache; // @synthesize sharedCache=_sharedCache;
@property(retain) NSArray *kernelBinaryLoadInfos; // @synthesize kernelBinaryLoadInfos=_kernelBinaryLoadInfos;
@property(retain) NSArray *userBinaryLoadInfos; // @synthesize userBinaryLoadInfos=_userBinaryLoadInfos;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasKernelStack;
- (BOOL)hasUserStack;
- (BOOL)hasStack;
- (void)clearTaskData;
- (void)clearThreadData;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(BOOL)arg2;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

