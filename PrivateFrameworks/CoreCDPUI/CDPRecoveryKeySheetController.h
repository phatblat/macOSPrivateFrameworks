//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreCDPUI/CDPRecoveryKeySheetBaseController.h>

@class NSWindow;

@interface CDPRecoveryKeySheetController : CDPRecoveryKeySheetBaseController
{
    NSWindow *_cdpRecoveryKeySheet;
}

@property(retain) NSWindow *cdpRecoveryKeySheet; // @synthesize cdpRecoveryKeySheet=_cdpRecoveryKeySheet;
- (void).cxx_destruct;
- (void)handleCompletion:(BOOL)arg1 andError:(id)arg2;
- (void)showCdpRecoveryKeyWithWindow:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

