//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalCalDAVTaskManager, CalDAVBasicAccountInfoProvider;

@interface CalCalDAVAuthenticationTask : CalSingleSynchronousTask
{
    CalDAVBasicAccountInfoProvider *_accountInfoProvider;
    CalCalDAVTaskManager *_taskManager;
}

@property(retain, nonatomic) CalDAVBasicAccountInfoProvider *accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (void)authenticateSynchronously;
- (id)initWithBasicAccountInfoProvider:(id)arg1;

@end

