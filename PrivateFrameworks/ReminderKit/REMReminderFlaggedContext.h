//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMReminder;

@interface REMReminderFlaggedContext : NSObject
{
    REMReminder *_reminder;
}

@property(retain, nonatomic) REMReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long flagged;
- (id)initWithReminder:(id)arg1;

@end
