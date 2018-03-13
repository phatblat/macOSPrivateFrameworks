//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface SCRVisualsBrailleWindow : NSObject <NSWindowDelegate>
{
    BOOL _brailleDeviceConnected;
    BOOL _temporarilyHidden;
    int __enabled;
    NSAttributedString *_brailleWithAttributes;
    id <AXVABrailleWindowInterface> __brailleAgent;
}

@property(nonatomic, setter=_setEnabled:) int _enabled; // @synthesize _enabled=__enabled;
@property(retain, nonatomic, setter=_setBrailleAgent:) id <AXVABrailleWindowInterface> _brailleAgent; // @synthesize _brailleAgent=__brailleAgent;
@property(nonatomic) BOOL temporarilyHidden; // @synthesize temporarilyHidden=_temporarilyHidden;
@property(copy, nonatomic) NSAttributedString *brailleWithAttributes; // @synthesize brailleWithAttributes=_brailleWithAttributes;
@property(nonatomic) BOOL brailleDeviceConnected; // @synthesize brailleDeviceConnected=_brailleDeviceConnected;
- (void).cxx_destruct;
- (void)_preferencesChangedForKeyPath:(id)arg1 value:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setEnabledAndAnnounceChange:(int)arg1;
- (void)showBrailleWindow;
- (void)_brailleWindowNeedsDisplay;
- (void)setFontSize:(double)arg1;
- (id)_createBrailleInfoFromAttributes:(id)arg1;
@property(nonatomic) int enabled;
- (void)dealloc;
- (id)initWithBrailleAgent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

