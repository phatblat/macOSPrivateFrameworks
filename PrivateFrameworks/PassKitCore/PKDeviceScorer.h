//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, PKDSPContext;

@interface PKDeviceScorer : NSObject
{
    NSData *_lastDeviceScoreIdentifier;
    NSData *_lastDeviceScore;
    double _deviceScoreTimeout;
    PKDSPContext *_context;
}

+ (BOOL)deviceScoringSupported;
@property(readonly, copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
@property(nonatomic) double deviceScoreTimeout; // @synthesize deviceScoreTimeout=_deviceScoreTimeout;
- (void).cxx_destruct;
- (void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

