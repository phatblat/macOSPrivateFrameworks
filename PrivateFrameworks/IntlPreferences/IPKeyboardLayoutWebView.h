//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

#import "WebFrameLoadDelegate.h"
#import "WebUIDelegate.h"

@class DOMDocument, NSDictionary, NSLayoutConstraint, NSString;

@interface IPKeyboardLayoutWebView : WebView <WebFrameLoadDelegate, WebUIDelegate>
{
    unsigned char _physicalKeyboardHardwareID;
    BOOL _isKeyboardLayoutDocumentTrackpadHandwriting;
    unsigned int _modifiedKeyState;
    NSString *_keyboardLayoutIdentifier;
    NSString *_inputSourceID;
    NSString *_inputSourceLanguageCode;
    NSString *_localizedInputSourceName;
    NSString *_HTMLFilename;
    id _eventMonitor;
    struct UCKeyboardLayout *_keyboardLayout;
    DOMDocument *_keyboardLayoutDocument;
    NSLayoutConstraint *_heightConstraint;
}

+ (id)supportedHardwareIDs;
+ (id)userInterfaceLocale;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property BOOL isKeyboardLayoutDocumentTrackpadHandwriting; // @synthesize isKeyboardLayoutDocumentTrackpadHandwriting=_isKeyboardLayoutDocumentTrackpadHandwriting;
@property(retain) DOMDocument *keyboardLayoutDocument; // @synthesize keyboardLayoutDocument=_keyboardLayoutDocument;
@property struct UCKeyboardLayout *keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
@property(nonatomic) unsigned int modifiedKeyState; // @synthesize modifiedKeyState=_modifiedKeyState;
@property(retain) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(copy) NSString *HTMLFilename; // @synthesize HTMLFilename=_HTMLFilename;
@property(copy) NSString *localizedInputSourceName; // @synthesize localizedInputSourceName=_localizedInputSourceName;
@property(copy) NSString *inputSourceLanguageCode; // @synthesize inputSourceLanguageCode=_inputSourceLanguageCode;
@property(copy) NSString *inputSourceID; // @synthesize inputSourceID=_inputSourceID;
@property(copy) NSString *keyboardLayoutIdentifier; // @synthesize keyboardLayoutIdentifier=_keyboardLayoutIdentifier;
- (void).cxx_destruct;
@property(readonly) NSDictionary *wubihuaWorkaroundMappingTable;
@property(readonly) NSDictionary *inputModeKeyboardLayoutMappingTable;
@property(nonatomic) unsigned char physicalKeyboardHardwareID; // @synthesize physicalKeyboardHardwareID=_physicalKeyboardHardwareID;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (unsigned char)defaultFallbackForPhysicalKeyboardID:(unsigned char)arg1;
- (unsigned char)fallbackForKeyboardIDWithDFRAndEscapeKey:(unsigned char)arg1;
- (void)updateAriaLabel;
- (void)updateTrackpadLabel;
- (void)updateKeyLabels;
- (void)updateHeightConstraintWithHeight:(unsigned long long)arg1;
- (void)loadResource;
- (void)showKeyboardLayout;
- (BOOL)hasKeyboardLayoutIdentifierForInputSourceID:(id)arg1 withOptionalInputSourceLanguageCode:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (unsigned char)keyboardID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
