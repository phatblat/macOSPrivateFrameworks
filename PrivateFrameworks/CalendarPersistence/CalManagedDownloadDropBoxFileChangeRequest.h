//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString;

@interface CalManagedDownloadDropBoxFileChangeRequest : CalManagedChangeRequest
{
}

+ (id)insertDownloadDropBoxFileRequestForFileName:(id)arg1 withEtag:(id)arg2 forLocalUID:(id)arg3 forSharedUID:(id)arg4 fromSource:(id)arg5 isUserRequested:(BOOL)arg6 inManagedObjectContext:(id)arg7;

// Remaining properties
@property(retain) NSString *attachmentName; // @dynamic attachmentName;
@property BOOL isLastInBatch; // @dynamic isLastInBatch;
@property BOOL isUserRequested; // @dynamic isUserRequested;

@end

