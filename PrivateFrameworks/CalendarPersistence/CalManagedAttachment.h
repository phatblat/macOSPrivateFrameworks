//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import "EKProtocolAttachment.h"

@class CalManagedCalendarItem, NSData, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSURL;

@interface CalManagedAttachment : CalManagedObject <EKProtocolAttachment>
{
    NSData *_data;
    NSString *_filename;
}

+ (id)uniqueIdentifierForObject:(id)arg1;
+ (id)bestFilenameForAttachment:(id)arg1;
+ (void)addAttachmentPrefetchToCalendarItemFetch:(id)arg1;
+ (id)fetchRequestWithURL:(id)arg1 inGroup:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithURL:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (BOOL)_isManagedAttachmentCalendar:(id)arg1;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)enclosingSource;
- (id)uniqueKeyForObject;
- (id)uniqueIdentifier;
- (void)willSave;
- (BOOL)isInDetachedEvent;
- (BOOL)isLocalAttachment;
@property(retain) NSString *filename;
@property(retain) NSString *filenameInCache; // @dynamic filenameInCache;
@property(retain) NSURL *pathOnDisk;
@property(readonly, retain) NSURL *urlOnDisk;
@property(retain) NSURL *url;
- (void)willRefresh:(BOOL)arg1;
- (void)setAttachmentIDOnServer:(id)arg1;
@property(readonly, retain) NSString *attachmentIDOnServer;
@property(retain) NSURL *urlOnServer;
@property(readonly, retain) NSNumber *isAutoArchivedNumber;
- (void)awakeFromInsert;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4;
- (void)_importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 accumulatedAttachmentFilenames:(id)arg5;

// Remaining properties
@property(retain) NSString *attachmentID; // @dynamic attachmentID;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(retain) NSString *contentType; // @dynamic contentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSString *filenameSuggestedByServer; // @dynamic filenameSuggestedByServer;
@property(readonly) unsigned long long hash;
@property BOOL isAutoArchived; // @dynamic isAutoArchived;
@property BOOL isCached; // @dynamic isCached;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(retain) CalManagedCalendarItem *item; // @dynamic item;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property BOOL omitSyncRecord; // @dynamic omitSyncRecord;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;
@property(retain) NSString *uuid; // @dynamic uuid;

@end

