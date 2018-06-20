//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSManagedObject<ICNFMCPersistedAttachment>, NSManagedObject<ICNFMCPersistedReference>, NSSet, NSString;

@protocol ICNFMCPersistedMessage <NSObject>
@property(copy, nonatomic) NSSet *attachments;
@property(copy, nonatomic) NSString *bodyHTML;
@property(nonatomic) BOOL unread;
@property(copy, nonatomic) NSSet *references;
@property(copy, nonatomic) NSString *messageID;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *from;
@property(retain, nonatomic) NSDate *dateReceived;
@property(retain, nonatomic) NSDate *dateSent;
@property(retain, nonatomic) NSDate *dateCreated;
- (void)addPersistedAttachement:(NSManagedObject<ICNFMCPersistedAttachment> *)arg1;
- (NSManagedObject<ICNFMCPersistedAttachment> *)createAttachmentWithName:(NSString *)arg1;
- (NSManagedObject<ICNFMCPersistedAttachment> *)attachmentWithContentID:(NSString *)arg1;

@optional
- (NSManagedObject<ICNFMCPersistedReference> *)newReference;
@end

