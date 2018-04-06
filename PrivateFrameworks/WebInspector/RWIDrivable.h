//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, RWIApplication;

__attribute__((visibility("hidden")))
@interface RWIDrivable : NSObject
{
    NSNumber *_targetIdentifier;
    NSString *_sessionIdentifier;
    RWIApplication *_owningApplication;
    long long _state;
    id <RWIDrivableDelegate> _delegate;
    id <RWIDriverSession> _pairedSession;
}

@property(readonly, nonatomic) id <RWIDriverSession> pairedSession; // @synthesize pairedSession=_pairedSession;
@property(nonatomic) __weak id <RWIDrivableDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) RWIApplication *owningApplication; // @synthesize owningApplication=_owningApplication;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSNumber *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void).cxx_destruct;
- (void)sendMessageToFrontend:(id)arg1;
- (void)sendMessageToBackend:(id)arg1;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (void)unpairWithSession:(id)arg1;
- (void)pairWithSession:(id)arg1;
- (void)updateState:(long long)arg1 pairedSession:(id)arg2;
- (id)initWithApplication:(id)arg1 sessionIdentifier:(id)arg2 targetIdentifier:(id)arg3 state:(long long)arg4;

@end
