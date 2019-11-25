//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DirectoryEditorViewController, NSButton, NSPanel, NSTextField, ODNode;

__attribute__((visibility("hidden")))
@interface AuthToNodeSheetController : NSObject
{
    NSPanel *_authSheet;
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSTextField *_directionsTextField;
    ODNode *_node;
    DirectoryEditorViewController *_dirEditorViewController;
}

@property(retain) NSPanel *authSheet; // @synthesize authSheet=_authSheet;
- (void)beginSheet;
- (void)awakeFromNib;
- (void)buttonHit:(id)arg1;
- (void)dealloc;
- (id)initWithNode:(id)arg1 forDirEditorViewController:(id)arg2;
- (void)closeAuthSheet;

@end

