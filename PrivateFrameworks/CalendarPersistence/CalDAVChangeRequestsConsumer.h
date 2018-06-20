//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPortDelegate.h"

@class NSOperationQueue, NSString;

@interface CalDAVChangeRequestsConsumer : NSObject <NSPortDelegate>
{
    long long _lastSequenceNumberProcessed;
    NSOperationQueue *_queue;
    int _lastChangeRequestTypeProcessed;
    NSString *_lastLocalUIDProcessed;
    id <EKServerChangeObserver> _observer;
}

+ (id)sharedInstance;
@property(retain) NSString *lastLocalUIDProcessed; // @synthesize lastLocalUIDProcessed=_lastLocalUIDProcessed;
@property int lastChangeRequestTypeProcessed; // @synthesize lastChangeRequestTypeProcessed=_lastChangeRequestTypeProcessed;
@property long long lastSequenceNumberProcessed; // @synthesize lastSequenceNumberProcessed=_lastSequenceNumberProcessed;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)makeSharedCalendarInvitationResponseOperation:(id)arg1 forSession:(id)arg2;
- (id)makeMoveEntityOperation:(id)arg1 forSession:(id)arg2 source:(id)arg3;
- (id)makeExpandGroupOperation:(id)arg1 forSession:(id)arg2;
- (id)makeDeleteNotificationCollectionFileOperation:(id)arg1 forSession:(id)arg2;
- (id)makeDeleteInboxFileOperation:(id)arg1 forSession:(id)arg2;
- (id)makeDeleteDropBoxFile:(id)arg1 forSource:(id)arg2;
- (id)makeDownloadDropBoxFile:(id)arg1 forSource:(id)arg2;
- (id)makeUploadDropBoxFile:(id)arg1 forSource:(id)arg2;
- (id)makeDeleteDropBoxOperation:(id)arg1 forSource:(id)arg2;
- (id)makeChangePublishStatusOperation:(id)arg1 forSession:(id)arg2;
- (id)makeChangeAffectingAvailabilityCalendarOperation:(id)arg1 forSession:(id)arg2;
- (id)createOrUpdateShareeOperation:(id)arg1 forSession:(id)arg2;
- (id)makeSetPropertyCalendarHomeOperation:(id)arg1 forSession:(id)arg2;
- (id)makeSetPropertyCalendarOperation:(id)arg1 forSession:(id)arg2;
- (id)makeRemovePropertyCalendarOperation:(id)arg1 forSession:(id)arg2;
- (id)makeSplitCalendarItemTypesOperation:(id)arg1 forSession:(id)arg2 forSource:(id)arg3;
- (id)makeReportJunkCalendarOperation:(id)arg1 principal:(id)arg2 forSession:(id)arg3;
- (id)makeRemoveCalendarOperation:(id)arg1 forSession:(id)arg2;
- (id)makeAddCalendarOperation:(id)arg1 forSession:(id)arg2;
- (id)makeEventScheduleOperation:(id)arg1 forSource:(id)arg2 forSession:(id)arg3;
- (id)makeEntityRemoveOperation:(id)arg1 forSource:(id)arg2;
- (id)makeEntityChangeOperation:(id)arg1 forSource:(id)arg2;
- (id)makeEntityAddOperation:(id)arg1 forSource:(id)arg2;
- (void)processChangeRequestsSynchronously;
- (void)processChangeRequests;
- (void)_processChangeRequests;
- (id)_expandProcessChangeRequest:(id)arg1 forOperation:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)_processChangeRequest:(id)arg1 deleteCRIfNoOperation:(char *)arg2 inManagedObjectContext:(id)arg3;
- (void)runOperationOnConsumerQueue:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

