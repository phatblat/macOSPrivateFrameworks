//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBlockOperation.h"

@class NSProgress;

@interface PLLibraryServicesOperation : NSBlockOperation
{
    CDUnknownBlockType _cancellationBlock;
    struct os_unfair_lock_s _cancellationLock;
    BOOL _cancellationBlockCalled;
    long long _requiredState;
    NSProgress *_progress;
    long long _progressPercentOfTotal;
}

+ (id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(CDUnknownBlockType)arg4;
+ (BOOL)shouldSuppressLogging;
+ (void)setShouldSuppressLogging:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
@property(nonatomic) long long progressPercentOfTotal; // @synthesize progressPercentOfTotal=_progressPercentOfTotal;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long requiredState; // @synthesize requiredState=_requiredState;
- (void).cxx_destruct;
- (void)_safeRemoveCancellationObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)debugDescription;
- (void)setExecutionBlockFromOperationBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
