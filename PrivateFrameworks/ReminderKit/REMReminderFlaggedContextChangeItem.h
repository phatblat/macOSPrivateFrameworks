//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject
{
    REMReminderChangeItem *_reminderChangeItem;
}

@property(retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // @synthesize reminderChangeItem=_reminderChangeItem;
- (void).cxx_destruct;
@property(nonatomic) long long flagged;
- (id)initWithReminderChangeItem:(id)arg1;

@end

