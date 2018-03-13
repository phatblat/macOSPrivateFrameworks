//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSWindow, NSWindowController, UAScrollZoomSheet;

@interface UAScrollZoomSheetController : NSObject
{
    NSWindow *HostWindow;
    UAScrollZoomSheet *_scrollZoomSheet;
    BOOL _hideModifiersEditor;
    BOOL _hideScrollZoomCheckbox;
    NSWindowController *_zoomWindowController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)scrollZoomCheckboxSetHidden:(BOOL)arg1;
- (void)modifiersEditorSetHidden:(BOOL)arg1;
- (void)displaySheet:(id)arg1;
- (void)beginSheetOnWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

