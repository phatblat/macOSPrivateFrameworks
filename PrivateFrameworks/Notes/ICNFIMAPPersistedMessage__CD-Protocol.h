//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICNFMCPersistedMessage.h"

@class NSDate, NSManagedObject<ICNFIMAPPersistedMailbox>, NSNumber, NSString, NSUUID;

@protocol ICNFIMAPPersistedMessage__CD <ICNFMCPersistedMessage>
@property(retain, nonatomic) NSManagedObject<ICNFIMAPPersistedMailbox> *mailbox;
@property(nonatomic) long long mimeDataSize;
@property(retain, nonatomic) NSDate *dateEdited;
@property(retain, nonatomic) NSUUID *universallyUniqueID;
@property(retain, nonatomic) NSNumber *imapUID;
- (NSString *)compactDescription;
@end
