//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXClientServiceConsuming.h"
#import "SVXClientSpeechSynthesisServicing.h"

@class NSString;

@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing>
{
    id <SVXPerforming> _performer;
    id <SVXClientServiceProviding> _clientServiceProvider;
}

- (void).cxx_destruct;
- (void)stopRequest:(id)arg1;
- (void)cancelPendingRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientServiceDidChange;
- (id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
