//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction
{
    SASProximityHandshake *_handshake;
}

+ (unsigned long long)actionID;
@property(retain) SASProximityHandshake *handshake; // @synthesize handshake=_handshake;
- (void).cxx_destruct;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;
- (BOOL)hasResponse;
- (id)init;

@end

