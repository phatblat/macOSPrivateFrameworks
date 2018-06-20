//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class ACAccount, AKDevice;

@interface SASProximityCompanionAuthRequestAction : SASProximityAction
{
    AKDevice *_companionDevice;
    ACAccount *_account;
}

+ (unsigned long long)actionID;
@property(retain) ACAccount *account; // @synthesize account=_account;
@property(retain) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
- (void).cxx_destruct;
- (id)idmsAccountForiCloud;
- (void)setResponseFromDictionary:(id)arg1;
- (id)responsePayload;
- (BOOL)hasResponse;

@end

