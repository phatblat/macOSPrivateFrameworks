//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

#import "CalDAVEntityTaggableOperation.h"
#import "CalDAVPutCalendarItemTaskDelegate.h"
#import "CoreDAVGetTaskDelegate.h"

@class CoreDAVGetTask, NSData, NSDate, NSManagedObjectID, NSString, NSURL;

@interface CalDAVWriteEntityQueueableOperation : CalDAVEntityQueueableOperation <CalDAVPutCalendarItemTaskDelegate, CoreDAVGetTaskDelegate, CalDAVEntityTaggableOperation>
{
    NSURL *_calendarURL;
    BOOL _overwrite;
    CoreDAVGetTask *_currentlyRunningGetEntityTask;
    BOOL _clearedSyncMalfunctionProperties;
    NSData *_icsData;
    BOOL _forceSerializeTimezones;
    BOOL _forceToServer;
    NSString *_eTag;
    NSString *_scheduleTag;
    NSManagedObjectID *_objectID;
    NSString *_sliceChildLocalUID;
    NSDate *_sliceDate;
}

+ (id)_addRecurrenceSet:(id)arg1 toICSData:(id)arg2;
@property(retain) NSData *icsData; // @synthesize icsData=_icsData;
@property(retain) NSDate *sliceDate; // @synthesize sliceDate=_sliceDate;
@property(retain) NSString *sliceChildLocalUID; // @synthesize sliceChildLocalUID=_sliceChildLocalUID;
@property BOOL forceToServer; // @synthesize forceToServer=_forceToServer;
@property BOOL forceSerializeTimezones; // @synthesize forceSerializeTimezones=_forceSerializeTimezones;
@property(retain) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
@property(retain) NSString *eTag; // @synthesize eTag=_eTag;
@property(nonatomic) BOOL clearedSyncMalfunctionProperties; // @synthesize clearedSyncMalfunctionProperties=_clearedSyncMalfunctionProperties;
@property(retain) CoreDAVGetTask *currentlyRunningGetEntityTask; // @synthesize currentlyRunningGetEntityTask=_currentlyRunningGetEntityTask;
- (void).cxx_destruct;
@property(readonly) BOOL shouldHaveTagsUpdated;
- (id)_otherWriteOperationsToSameSharedUID;
- (void)finishOperation;
- (void)clearSyncMalfunctionPropertiesWithContext:(id)arg1;
- (void)enqueue;
- (void)configureOperationDependencies;
- (id)calendarURL;
- (void)removeAssociatedEntities;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (BOOL)_permanentErrorForStatus:(int)arg1;
- (void)_putTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (id)_recurrenceRuleSetFromICSDocument:(id)arg1;
- (BOOL)_canFilterOutTimezonesWithCalendar:(id)arg1;
- (void)_clearTagsForItem:(id)arg1 delete:(BOOL)arg2;
- (void)_runPutTaskAtURL:(id)arg1;
- (void)_runPostSliceTaskAtURL:(id)arg1 sliceChildSharedUID:(id)arg2 floating:(BOOL)arg3 allDay:(BOOL)arg4;
- (id)_sliceMasterInContext:(id)arg1;
- (void)performOperation:(BOOL)arg1;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)arg1 eTag:(id)arg2 scheduleTag:(id)arg3 icsData:(id)arg4 overwrite:(BOOL)arg5 objectID:(id)arg6 calendarURL:(id)arg7 fromSource:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

