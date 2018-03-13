//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTYCallDelegate.h"

@class NSMutableArray, NSString;

@interface AXTTYController : NSObject <TTYCallDelegate>
{
    NSMutableArray *_ttyCalls;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *ttyCalls; // @synthesize ttyCalls=_ttyCalls;
- (void).cxx_destruct;
- (void)ttyCall:(id)arg1 didReceiveCharacter:(unsigned short)arg2 forUtterance:(id)arg3;
- (id)displayCallPrompt:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleDatabaseRequest:(id)arg1;
- (void)dealloc;
- (void)updateRelayNumber;
- (id)callForUUID:(id)arg1;
- (void)callDidConnect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

