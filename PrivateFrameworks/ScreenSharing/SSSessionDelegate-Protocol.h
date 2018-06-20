//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SSFileCopy, SSInputEvent, SSSession;

@protocol SSSessionDelegate <NSObject>
@property(readonly) BOOL useAVConference;

@optional
- (BOOL)ssSessionIsRedwood;
- (BOOL)handleSSInputEvent:(SSInputEvent *)arg1;
- (void)ssSessionRequestToAddTextToPasteboard:(SSSession *)arg1 result:(int)arg2;
- (void)ssSessionRequestToOpenURL:(SSSession *)arg1 result:(int)arg2;
- (void)ssSessionRequestToResume:(SSSession *)arg1 result:(int)arg2;
- (void)ssSessionResumed:(SSSession *)arg1;
- (void)ssSessionPaused:(SSSession *)arg1;
- (void)ssSession:(SSSession *)arg1 allowsControl:(BOOL)arg2;
- (void)ssSession:(SSSession *)arg1 canToggleCurtainModeChanged:(BOOL)arg2;
- (void)ssSession:(SSSession *)arg1 onConsoleChanged:(BOOL)arg2;
- (void)ssSessionDisplaysDidSleep:(SSSession *)arg1;
- (void)ssSessionDisplaysDidWake:(SSSession *)arg1;
- (void)ssSessionUserClosedConnection:(SSSession *)arg1;
- (BOOL)hasHotkeyForKeyCode:(NSNumber *)arg1;
- (void)ssSession:(SSSession *)arg1 virtualDisplayStateChanged:(BOOL)arg2;
- (void)ssSessionUserPictureChanged:(SSSession *)arg1;
- (void)ssSessionBeeped:(SSSession *)arg1;
- (void)ssSession:(SSSession *)arg1 fileCopyDidComplete:(SSFileCopy *)arg2;
- (void)ssSession:(SSSession *)arg1 fileCopyProgressDidUpdate:(SSFileCopy *)arg2;
- (void)ssSession:(SSSession *)arg1 dragDroppedLocalPaths:(NSArray *)arg2 onRemotePath:(NSString *)arg3;
- (void)ssSession:(SSSession *)arg1 systemInfoRequestCompleted:(NSDictionary *)arg2;
- (void)ssSessionRemotePasteboardChanged:(SSSession *)arg1;
- (void)ssSession:(SSSession *)arg1 cursorPositionChanged:(struct SSPoint)arg2;
- (void)ssSession:(SSSession *)arg1 fullScreenUpdateProgress:(double)arg2;
- (void)ssSession:(SSSession *)arg1 sizeChanged:(struct SSSize)arg2;
- (void)ssSessionReady:(SSSession *)arg1;
- (void)ssSession:(SSSession *)arg1 sessionSelectionResult:(int)arg2;
- (void)ssSession:(SSSession *)arg1 wantsSessionSelection:(NSArray *)arg2 consoleUser:(NSString *)arg3;
- (void)ssSession:(SSSession *)arg1 authenticationResult:(int)arg2;
- (void)ssSession:(SSSession *)arg1 wantsCredentialsForAuthenticationTypes:(NSArray *)arg2;
- (void)ssSessionTerminated:(SSSession *)arg1;
- (void)ssSession:(SSSession *)arg1 connectDidFail:(int)arg2;
- (void)ssSession:(SSSession *)arg1 delegateControlModeSet:(long long)arg2;
@end

