//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>

#import "CoreDAVDeleteTaskDelegate.h"

@class NSString, NSURL;

@interface CalDAVDeleteEntityQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVDeleteTaskDelegate>
{
    NSURL *_calendarURL;
    NSString *_eTag;
    NSString *_scheduleTag;
}

@property(retain) NSString *scheduleTag; // @synthesize scheduleTag=_scheduleTag;
@property(retain) NSString *eTag; // @synthesize eTag=_eTag;
- (void).cxx_destruct;
- (void)enqueue;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)performOperation:(BOOL)arg1;
- (id)readableDescription;
- (id)initWithChangeRequest:(id)arg1 calendarURL:(id)arg2 fromSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
