//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LUI2Window, NSMutableArray, NSTimer;

@interface LUI2MultiWindowController : NSObject
{
    BOOL _registered;
    NSMutableArray *_windows;
    NSTimer *_displayChangeTimer;
}

@property(retain) NSTimer *displayChangeTimer; // @synthesize displayChangeTimer=_displayChangeTimer;
@property BOOL registered; // @synthesize registered=_registered;
@property(retain) NSMutableArray *windows; // @synthesize windows=_windows;
- (void)dealloc;
- (id)init;
- (id)windowNumbers;
- (void)showWindows;
- (void)setBackgroundImages:(id)arg1;
- (void)setWindowLevels:(long long)arg1;
- (void)setWindowAlphaValues:(double)arg1 animate:(BOOL)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)hideWindows;
@property(readonly) LUI2Window *mainWindow;
- (void)_updateWindows;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (void)_updateDisplayChange;
- (void)_startOrUpdateDisplayReconfigurationTimer:(double)arg1;
- (void)_endDisplayChange:(id)arg1;
- (void)_displaysDidChange:(id)arg1;
- (void)_beginDisplayChange;

@end

