//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@protocol EDSearchableIndexAttachmentItemMetadatumBuilder <NSObject>
@property(retain, nonatomic) NSDate *dateSent;
@property(retain, nonatomic) NSDate *dateReceived;
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *senderAddress;
@property(copy, nonatomic) NSArray *mailboxIdentifiers;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(copy, nonatomic) NSString *domainIdentifier;
@end
