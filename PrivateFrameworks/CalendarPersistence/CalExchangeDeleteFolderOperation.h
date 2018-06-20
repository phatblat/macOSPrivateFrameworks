//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangePersistentOperation.h>

#import "CalMessageTraceableOpearation.h"
#import "CalRevertableOperation.h"

@class EWSBaseFolderIdType, NSManagedObjectID, NSString;

@interface CalExchangeDeleteFolderOperation : CalExchangePersistentOperation <CalRevertableOperation, CalMessageTraceableOpearation>
{
    EWSBaseFolderIdType *_folderId;
    NSManagedObjectID *_folderObjectId;
    NSString *_folderName;
}

+ (BOOL)supportsSecureCoding;
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
- (id)folderId;
- (id)initWithSessionID:(id)arg1 folderId:(id)arg2 folderObjectID:(id)arg3 folderName:(id)arg4;

@end

