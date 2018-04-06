//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFMCMessage.h>

@class ICNFMCMutableMessageHeaders, NSData, NSString, _ICNFMCOutgoingMessageBody;

@interface ICNFMCOutgoingMessage : ICNFMCMessage
{
    _ICNFMCOutgoingMessageBody *_messageBody;
    unsigned long long _localAttachmentsSize;
    ICNFMCMutableMessageHeaders *_mutableHeaders;
    NSString *_existingRemoteID;
    NSString *_remoteID;
    NSData *_rawData;
}

@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
@property(retain, nonatomic) ICNFMCMutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_mutableHeaders;
- (void).cxx_destruct;
- (void)setLocalAttachmentsSize:(unsigned long long)arg1;
- (unsigned long long)messageSize;
- (id)headersIfAvailable;
- (id)headers;
- (id)messageDataIncludingFromSpace:(BOOL)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)messageBodyIfAvailable;
@property(retain, nonatomic) _ICNFMCOutgoingMessageBody *messageBody;
- (id)dataSource;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (void)dealloc;
- (id)init;

@end
