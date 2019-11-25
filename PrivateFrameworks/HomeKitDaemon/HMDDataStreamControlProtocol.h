//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDDataStreamProtocol.h"
#import "HMFLogging.h"

@class NSNumber, NSString;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    BOOL _helloMessageResponseReceived;
    NSString *_logIdentifier;
    NSNumber *_pendingHelloMessageIdentifier;
}

+ (id)logCategory;
@property(retain, nonatomic) NSNumber *pendingHelloMessageIdentifier; // @synthesize pendingHelloMessageIdentifier=_pendingHelloMessageIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) BOOL helloMessageResponseReceived; // @synthesize helloMessageResponseReceived=_helloMessageResponseReceived;
- (void).cxx_destruct;
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (BOOL)isExpectedHelloControlMessage:(id)arg1 header:(id)arg2;
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)initWithLogIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

