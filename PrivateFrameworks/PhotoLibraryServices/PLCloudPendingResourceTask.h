//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject
{
    CPLResourceTransferTask *_transferTask;
    NSDate *_lastUpdated;
    BOOL _completed;
    BOOL _transferTaskRemoved;
    NSMutableDictionary *_taskIdentifierToProgressBlock;
    NSMutableDictionary *_taskIdentifierToCompletionHandler;
}

- (void).cxx_destruct;
- (id)lastUpdated;
- (id)taskIDs;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)reportCompletionWithError:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withTaskIdentifier:(id)arg3;
- (void)keepAlive;
- (void)setTransferTask:(id)arg1;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forTaskIdentifier:(id)arg3;

@end
