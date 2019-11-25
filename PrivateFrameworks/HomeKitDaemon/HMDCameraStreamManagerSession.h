//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDCameraStreamSessionID, HMFMessage, HMFTimer, NSNumber, NSString;

@interface HMDCameraStreamManagerSession : HMFObject
{
    id <HMDCameraStreamControlManagerProtocol> _streamControlManager;
    HMDCameraStreamSessionID *_sessionID;
    NSString *_destinationID;
    HMFTimer *_streamSetupTimer;
    NSString *_streamShowingAppIdentifier;
    NSNumber *_slotIdentifier;
    HMFMessage *_currentMessage;
}

@property(retain, nonatomic) HMFMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(retain, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(readonly, nonatomic) NSString *streamShowingAppIdentifier; // @synthesize streamShowingAppIdentifier=_streamShowingAppIdentifier;
@property(readonly, nonatomic) HMFTimer *streamSetupTimer; // @synthesize streamSetupTimer=_streamSetupTimer;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) id <HMDCameraStreamControlManagerProtocol> streamControlManager; // @synthesize streamControlManager=_streamControlManager;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamShowingAppIdentifier:(id)arg3 controlManager:(id)arg4 setupWaitPeriod:(unsigned long long)arg5 error:(id *)arg6;

@end

