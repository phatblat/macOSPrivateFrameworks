//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXServiceCommandHandling.h"

@class NSString, SVXSessionManager;

@interface _SVXServiceCommandHandlerSmsPlayAudio : NSObject <SVXServiceCommandHandling>
{
    SVXSessionManager *_sessionManager;
    NSString *_identifier;
}

+ (Class)supportedCommandClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isCommandUUFR:(id)arg1;
- (id)initWithSessionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
