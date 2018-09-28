//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSPIHandle, LPLinkMetadata, NSArray, NSAttributedString, NSDate, NSString, NSURL, PKCurrencyAmount;

@interface IMSPIMessage : NSObject
{
    NSString *_guid;
    NSArray *_chatGuids;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_subject;
    NSString *_effect;
    NSArray *_recipients;
    NSDate *_date;
    NSDate *_dateRead;
    NSDate *_lastReadDate;
    IMSPIHandle *_sender;
    long long _messageID;
    NSArray *_attachments;
    BOOL _isOutgoing;
    BOOL _isRead;
    BOOL _isAudioMessage;
    BOOL _isGroupChat;
    long long _itemType;
    NSString *_groupID;
    NSString *_chatIdentifier;
    NSString *_displayName;
    NSString *_service;
    IMSPIMessage *_referencedMessage;
    NSString *_bundleId;
    long long _messageType;
    NSString *_displayAppName;
    LPLinkMetadata *_richLinkMetadata;
    PKCurrencyAmount *_peerPaymentAmount;
}

@property(retain) PKCurrencyAmount *peerPaymentAmount; // @synthesize peerPaymentAmount=_peerPaymentAmount;
@property(retain) LPLinkMetadata *richLinkMetadata; // @synthesize richLinkMetadata=_richLinkMetadata;
@property(retain) NSString *displayAppName; // @synthesize displayAppName=_displayAppName;
@property long long messageType; // @synthesize messageType=_messageType;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) IMSPIMessage *referencedMessage; // @synthesize referencedMessage=_referencedMessage;
@property(retain) NSDate *lastReadDate; // @synthesize lastReadDate=_lastReadDate;
@property(retain) NSDate *dateRead; // @synthesize dateRead=_dateRead;
@property(retain) NSString *service; // @synthesize service=_service;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *effect; // @synthesize effect=_effect;
@property BOOL isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(retain) NSString *chatIdentifier; // @synthesize chatIdentifier=_chatIdentifier;
@property(retain) NSString *groupID; // @synthesize groupID=_groupID;
@property long long itemType; // @synthesize itemType=_itemType;
@property(retain) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain) NSArray *chatGuids; // @synthesize chatGuids=_chatGuids;
@property BOOL isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *subject; // @synthesize subject=_subject;
@property(retain) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain) IMSPIHandle *sender; // @synthesize sender=_sender;
@property(retain) NSString *text; // @synthesize text=_text;
@property BOOL isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property BOOL isRead; // @synthesize isRead=_isRead;
@property(retain) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property long long messageID; // @synthesize messageID=_messageID;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
@property(readonly) NSURL *url;
- (id)description;
- (void)dealloc;

@end

