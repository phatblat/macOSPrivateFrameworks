//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
    id <WBSCoalescedAsynchronousWriterDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSCoalescedAsynchronousWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)performScheduledWriteSynchronously;
- (void)startScheduledWriteNowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startScheduledWriteNow;
- (void)scheduleWrite;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (void)_writeDataAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_writeData:(id)arg1;
- (void)_waitForWriteCompletion;
- (id)_dataFromDataSource;
- (void)_scheduleTimer;
- (void)_timerFired;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5 writeDelayInterval:(double)arg6;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3 writeDelayInterval:(double)arg4;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;

@end

