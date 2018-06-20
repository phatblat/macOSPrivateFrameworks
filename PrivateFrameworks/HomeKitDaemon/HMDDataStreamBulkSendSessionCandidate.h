//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDDataStreamBulkSendSessionCandidate.h"

@class HMDDataStreamBulkSendProtocol, NSError, NSMutableArray, NSNumber;

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate>
{
    HMDDataStreamBulkSendProtocol *_bulkSendProtocol;
    NSNumber *_sessionIdentifier;
    NSMutableArray *_pendingReads;
    NSError *_receivedFailure;
}

@property(retain, nonatomic) NSError *receivedFailure; // @synthesize receivedFailure=_receivedFailure;
@property(retain, nonatomic) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(readonly, nonatomic) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) __weak HMDDataStreamBulkSendProtocol *bulkSendProtocol; // @synthesize bulkSendProtocol=_bulkSendProtocol;
- (void).cxx_destruct;
- (void)rejectBulkSendSessionWithReason:(unsigned char)arg1;
- (void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2;

@end

