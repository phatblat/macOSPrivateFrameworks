//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import "IDSSocketPairMessage.h"

@class NSData, NSDate, NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned long long _offset;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    NSString *_peerResponseIdentifier;
}

@property(readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) BOOL expectsPeerResponse;
@property(retain, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSString *messageUUID;
@property(readonly, nonatomic) BOOL wantsAppAck;

@end

