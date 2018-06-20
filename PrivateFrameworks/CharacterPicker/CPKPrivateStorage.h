//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPKDataProvider, CPKPopoverController, CPKWindow, EMFEmojiLocaleData, EMFEmojiPreferences, NSDictionary, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface CPKPrivateStorage : NSObject
{
    BOOL _needsRebuildView;
    BOOL _settingDataSource;
    BOOL _displayingPopover;
    BOOL _skipOpeningAnimation;
    BOOL _displayAsWindow;
    BOOL _showingLargeWindow;
    BOOL _lastTargetValidation;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
    id _globalEventMonitor;
    id _localEventMonitor;
    NSWindow *_alternateLargeWindow;
    NSWindow *_lastKeyWindow;
    id _lastActionObject;
    NSDictionary *_selectionAttributeForTextView;
    id <CPKCharacterEntity> _lastSelectedEntity;
    CPKWindow *_detachingWindow;
    CPKWindow *_detachedWindow;
    long long _detachedWindowLevel;
    CPKPopoverController *_tempRetainer;
    CPKDataProvider *_delayedSettingProvider;
    EMFEmojiPreferences *_emojiPreference;
    EMFEmojiLocaleData *_emojiLocaleData;
    struct CGPoint _displayAsWindowLoc;
    struct _NSRange _lastSelectionOnTarget;
    struct CGRect _positioningRect;
}

@property(retain) EMFEmojiLocaleData *emojiLocaleData; // @synthesize emojiLocaleData=_emojiLocaleData;
@property(retain) EMFEmojiPreferences *emojiPreference; // @synthesize emojiPreference=_emojiPreference;
@property(retain) CPKDataProvider *delayedSettingProvider; // @synthesize delayedSettingProvider=_delayedSettingProvider;
@property(retain) CPKPopoverController *tempRetainer; // @synthesize tempRetainer=_tempRetainer;
@property long long detachedWindowLevel; // @synthesize detachedWindowLevel=_detachedWindowLevel;
@property(retain) CPKWindow *detachedWindow; // @synthesize detachedWindow=_detachedWindow;
@property(retain) CPKWindow *detachingWindow; // @synthesize detachingWindow=_detachingWindow;
@property(retain) id <CPKCharacterEntity> lastSelectedEntity; // @synthesize lastSelectedEntity=_lastSelectedEntity;
@property(retain) NSDictionary *selectionAttributeForTextView; // @synthesize selectionAttributeForTextView=_selectionAttributeForTextView;
@property struct _NSRange lastSelectionOnTarget; // @synthesize lastSelectionOnTarget=_lastSelectionOnTarget;
@property BOOL lastTargetValidation; // @synthesize lastTargetValidation=_lastTargetValidation;
@property id lastActionObject; // @synthesize lastActionObject=_lastActionObject;
@property NSWindow *lastKeyWindow; // @synthesize lastKeyWindow=_lastKeyWindow;
@property NSWindow *alternateLargeWindow; // @synthesize alternateLargeWindow=_alternateLargeWindow;
@property BOOL showingLargeWindow; // @synthesize showingLargeWindow=_showingLargeWindow;
@property struct CGPoint displayAsWindowLoc; // @synthesize displayAsWindowLoc=_displayAsWindowLoc;
@property BOOL displayAsWindow; // @synthesize displayAsWindow=_displayAsWindow;
@property BOOL skipOpeningAnimation; // @synthesize skipOpeningAnimation=_skipOpeningAnimation;
@property BOOL displayingPopover; // @synthesize displayingPopover=_displayingPopover;
@property BOOL settingDataSource; // @synthesize settingDataSource=_settingDataSource;
@property BOOL needsRebuildView; // @synthesize needsRebuildView=_needsRebuildView;
@property(retain) id localEventMonitor; // @synthesize localEventMonitor=_localEventMonitor;
@property(retain) id globalEventMonitor; // @synthesize globalEventMonitor=_globalEventMonitor;
@property unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property NSView *positioningView; // @synthesize positioningView=_positioningView;
@property struct CGRect positioningRect; // @synthesize positioningRect=_positioningRect;
- (void)dealloc;

@end

