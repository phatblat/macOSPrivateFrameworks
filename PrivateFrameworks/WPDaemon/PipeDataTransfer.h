//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSUUID;

@interface PipeDataTransfer : NSObject
{
    unsigned char _txSeqNum;
    unsigned char _rxSeqNum;
    BOOL _rxFirstPacket;
    BOOL _rxWaitForMoreData;
    unsigned short _txTotalLenToSend;
    unsigned short _rxTotalLenToReceive;
    unsigned short _rxCurrentDataSize;
    NSUUID *_peerUUID;
    NSData *_txTotalDataToSend;
    NSData *_txData;
    unsigned long long _txDataLeftToSend;
    NSData *_rxTotalDataToReceive;
    NSData *_rxData;
    NSMutableData *_rxCurrentReceivedData;
    NSMutableData *_rxTotalDataWithLen;
}

@property BOOL rxWaitForMoreData; // @synthesize rxWaitForMoreData=_rxWaitForMoreData;
@property(retain) NSMutableData *rxTotalDataWithLen; // @synthesize rxTotalDataWithLen=_rxTotalDataWithLen;
@property(retain) NSMutableData *rxCurrentReceivedData; // @synthesize rxCurrentReceivedData=_rxCurrentReceivedData;
@property unsigned short rxCurrentDataSize; // @synthesize rxCurrentDataSize=_rxCurrentDataSize;
@property(retain) NSData *rxData; // @synthesize rxData=_rxData;
@property(retain) NSData *rxTotalDataToReceive; // @synthesize rxTotalDataToReceive=_rxTotalDataToReceive;
@property unsigned short rxTotalLenToReceive; // @synthesize rxTotalLenToReceive=_rxTotalLenToReceive;
@property BOOL rxFirstPacket; // @synthesize rxFirstPacket=_rxFirstPacket;
@property unsigned char rxSeqNum; // @synthesize rxSeqNum=_rxSeqNum;
@property unsigned long long txDataLeftToSend; // @synthesize txDataLeftToSend=_txDataLeftToSend;
@property(retain) NSData *txData; // @synthesize txData=_txData;
@property(retain) NSData *txTotalDataToSend; // @synthesize txTotalDataToSend=_txTotalDataToSend;
@property unsigned short txTotalLenToSend; // @synthesize txTotalLenToSend=_txTotalLenToSend;
@property unsigned char txSeqNum; // @synthesize txSeqNum=_txSeqNum;
@property(retain) NSUUID *peerUUID; // @synthesize peerUUID=_peerUUID;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)generateSequenceNumber;
- (void)resetRxTransfer;
- (void)resetTxTransfer;
- (void)resetAllTransfer;
- (id)initPipeDataTransferForPeer:(id)arg1;

@end

