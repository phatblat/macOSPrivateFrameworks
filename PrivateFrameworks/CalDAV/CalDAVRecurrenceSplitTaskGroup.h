//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

@class NSArray, NSURL;

@interface CalDAVRecurrenceSplitTaskGroup : CoreDAVTaskGroup
{
    NSURL *_folderURL;
    NSArray *_actions;
}

- (void).cxx_destruct;
- (void)startTaskGroup;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <CalDAVRecurrenceSplitTaskGroupDelegate> delegate; // @dynamic delegate;

@end
