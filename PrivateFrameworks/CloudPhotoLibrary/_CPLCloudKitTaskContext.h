//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCountedSet, NSDate, NSDictionary, NSMapTable;

@interface _CPLCloudKitTaskContext : NSObject
{
    NSMapTable *_contexts;
    NSCountedSet *_classCounts;
    NSCountedSet *_cellularClassCounts;
    NSDate *_lastOperationDate;
    Class _lastOperationClass;
    BOOL _cancelled;
    id <CPLCloudKitTrackableTask> _task;
    NSDate *_startDate;
}

@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) id <CPLCloudKitTrackableTask> task; // @synthesize task=_task;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *operationStatusDictionaries;
@property(readonly, nonatomic) NSDictionary *statusPerOperationType;
- (BOOL)_operationAllowsCellular:(id)arg1;
- (id)_qosForOperation:(id)arg1;
@property(readonly, nonatomic) NSCountedSet *countOfOperationWithCellularAccessClasses;
@property(readonly, nonatomic) NSCountedSet *countOfOperationClasses;
- (void)cancelAllOperations;
- (id)contextForOperation:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1 context:(id)arg2;
- (id)initWithTask:(id)arg1;

@end
