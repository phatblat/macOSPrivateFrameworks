//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXVHighlightOutlineView, NSArray, SCRApplication, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRVisualsHighlightCursor : NSObject
{
    BOOL _allowMouseCursorSync;
    BOOL __cursorEnabled;
    BOOL __trackpadMouseTrackingVOCursor;
    unsigned int __windowID;
    unsigned int __cgsConnectionID;
    NSArray *_cursorRects;
    SCRElement *_cursorElement;
    long long _magnificationLevel;
    AXVHighlightOutlineView *__voCursorView;
    SCRApplication *__cursorApplication;
    struct CGRect _cursorRect;
}

@property(nonatomic, setter=_setTrackpadMouseTrackingVOCursor:) BOOL _trackpadMouseTrackingVOCursor; // @synthesize _trackpadMouseTrackingVOCursor=__trackpadMouseTrackingVOCursor;
@property(nonatomic, setter=_setCursorApplication:) __weak SCRApplication *_cursorApplication; // @synthesize _cursorApplication=__cursorApplication;
@property(nonatomic, setter=_setCGSConnectionID:) unsigned int _cgsConnectionID; // @synthesize _cgsConnectionID=__cgsConnectionID;
@property(nonatomic, setter=_setWindowID:) unsigned int _windowID; // @synthesize _windowID=__windowID;
@property(nonatomic, setter=_setCursorEnabled:) BOOL _cursorEnabled; // @synthesize _cursorEnabled=__cursorEnabled;
@property(retain, nonatomic, setter=_setVOCursorView:) AXVHighlightOutlineView *_voCursorView; // @synthesize _voCursorView=__voCursorView;
@property(nonatomic) BOOL allowMouseCursorSync; // @synthesize allowMouseCursorSync=_allowMouseCursorSync;
@property(nonatomic) long long magnificationLevel; // @synthesize magnificationLevel=_magnificationLevel;
@property(readonly, nonatomic) SCRElement *cursorElement; // @synthesize cursorElement=_cursorElement;
@property(readonly, nonatomic) NSArray *cursorRects; // @synthesize cursorRects=_cursorRects;
@property(readonly, nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
- (void).cxx_destruct;
- (void)_unregisterWindowObservers;
- (void)_registerWindowObservers;
- (void)refreshHighlightCursor;
- (void)_refreshHighlightCursor;
- (void)_refreshHighlightCursorWithWindowID:(id)arg1;
- (void)_preferencesChangedForKeyPath:(id)arg1 value:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterPreferenceObservers;
- (void)_registerPreferenceObservers;
- (struct CGImage *)takeScreenshotOfBoundedContent;
- (void)highlightRects:(id)arg1 withElement:(id)arg2;
- (void)highlightRect:(struct CGRect)arg1 withElement:(id)arg2;
@property(nonatomic) BOOL centerInMainScreen;
@property(nonatomic, setter=_setScaleFactor:) double _scaleFactor;
- (void)_syncMouseCursorToVOCursor;
- (void)setCursorElement:(id)arg1;
- (BOOL)_isValidCursorRect:(struct CGRect)arg1;
- (struct CGRect)_convertRectFromScreenToWindowCoordinates:(struct CGRect)arg1;
- (void)setCursorRects:(id)arg1;
- (void)setCursorRect:(struct CGRect)arg1;
@property(nonatomic) BOOL cursorEnabled;
- (void)dealloc;
- (id)init;

@end

