//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMObjectID, REMSaveRequest, REMStore;

@protocol CalReminderKitProvider <NSObject>
- (void)setDefaultReminderListIdentifier:(REMObjectID *)arg1;
- (id <CalReminderKitDatabaseMigrationContext>)newDatabaseMigrationContext;
- (REMSaveRequest *)newSaveRequestWithStore:(REMStore *)arg1;
@end

