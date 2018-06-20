//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNReaderWriterScheduler.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _suspended;
    NSMutableArray *_activeReaders;
    NSMutableArray *_pendingReaders;
    NSMutableArray *_activeWriters;
    NSMutableArray *_pendingWriters;
}

@property(readonly, nonatomic) NSMutableArray *pendingWriters; // @synthesize pendingWriters=_pendingWriters;
@property(readonly, nonatomic) NSMutableArray *activeWriters; // @synthesize activeWriters=_activeWriters;
@property(readonly, nonatomic) NSMutableArray *pendingReaders; // @synthesize pendingReaders=_pendingReaders;
@property(readonly, nonatomic) NSMutableArray *activeReaders; // @synthesize activeReaders=_activeReaders;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)removeWriter:(id)arg1;
- (void)activateWriter:(id)arg1;
- (void)addWriterWithIdentifier:(id)arg1;
- (void)removeReader:(id)arg1;
- (void)activateReader:(id)arg1;
- (void)addReaderWithIdentifier:(id)arg1;
@property(nonatomic, getter=isSuspended) BOOL suspended;
- (void)appendDescriptionToBuilder:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;
- (id)performWriterBlock:(CDUnknownBlockType)arg1;
- (id)performReaderBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

