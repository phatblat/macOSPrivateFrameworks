//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSTextField, NSWindow;

@interface _MOMediaViewLayoutPresetNamingWindowController : NSWindowController
{
    NSButton *_acceptButton;
    NSButton *_cancelButton;
    NSTextField *_nameTextField;
    NSWindow *_presentingWindow;
}

- (void).cxx_destruct;
- (void)loadWindow;
- (BOOL)isWindowLoaded;
- (id)_createWindowButtonWithTitle:(id)arg1;
- (void)_respondToButton:(id)arg1;
- (id)userProvidedNameForOperation:(id)arg1 withSuggestedName:(id)arg2 disallowedNames:(id)arg3;
- (id)init;

@end

