//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXModuleInstanceProviding.h"

@class NSDictionary, NSString, SVXClientServiceServer, SVXDeviceSetupManager, SVXNowPlayingObserver, SVXServiceCommandHandler, SVXSessionManager, SVXSpeechSynthesizer, SVXSystemObserver;

@interface SVXModuleInstanceMap : NSObject <SVXModuleInstanceProviding>
{
    NSDictionary *_dictionaryRepresentation;
}

@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (void).cxx_destruct;
@property(readonly, nonatomic) SVXSystemObserver *systemObserver;
@property(readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property(readonly, nonatomic) SVXSessionManager *sessionManager;
@property(readonly, nonatomic) SVXServiceCommandHandler *serviceCommandHandler;
@property(readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property(readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property(readonly, nonatomic) SVXNowPlayingObserver *nowPlayingObserver;
- (id)moduleInstanceWithIdentifier:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
