//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

#import "CalMessageTraceableOpearation.h"

@class EWSFolderIdType, NSString;

@interface CalExchangeSyncFolderItemsOperation : CalExchangeOperation <CalMessageTraceableOpearation>
{
    EWSFolderIdType *_folderId;
    NSString *_messageTracerUID;
}

- (void).cxx_destruct;
- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)_retrieveUpdatedCreatedAndDeletedIDsFromChanges:(id)arg1 inCalendar:(id)arg2 createdOrUpdatedItemIds:(id)arg3 deletedItemIds:(id)arg4;
- (id)folderId;
- (id)initWithSession:(id)arg1 folderId:(id)arg2;
- (id)initWithSession:(id)arg1 folderId:(id)arg2 messageTracerUID:(id)arg3;

@end

