//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeAbstractWriteCalendarItemOperation.h>

#import "CalMessageTraceableOpearation.h"
#import "CalRevertableOperation.h"
#import "CalWriteCalendarItemOperation.h"

@class NSDictionary, NSManagedObjectID;

@interface CalExchangeUpdateTaskOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteCalendarItemOperation, CalRevertableOperation, CalMessageTraceableOpearation>
{
    NSManagedObjectID *_taskID;
    NSDictionary *_changedValues;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSManagedObjectID *taskID; // @synthesize taskID=_taskID;
- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)shouldDeletePendingOperation:(id)arg1;
- (id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)objectID;
- (id)initWithSessionID:(id)arg1 taskID:(id)arg2 changedValues:(id)arg3;

@end

