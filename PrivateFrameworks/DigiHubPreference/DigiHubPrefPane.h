//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencePane.h"

#import "NSOpenSavePanelDelegate.h"

@class NSBundle, NSButton, NSDictionary, NSMutableArray, NSPopUpButton, NSString, NSTableView;

@interface DigiHubPrefPane : NSPreferencePane <NSOpenSavePanelDelegate>
{
    NSDictionary *_bundleIDMapper;
    NSBundle *_frameworkBundle;
    NSDictionary *_events;
    NSPopUpButton *_currentPopupForPanel;
    NSTableView *_specificTableView;
    NSButton *_removeButton;
    NSMutableArray *_specificActionCells;
    NSMutableArray *_specificItems;
}

- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)_specificOptionsPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_optionsPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_addRemoveOptionToButton:(id)arg1;
- (void)_specificMenuWillPopup:(id)arg1;
- (void)_menuWillPopup:(id)arg1;
- (int)_performAtLoginState;
- (void)_setupActionCells;
- (void)_specificChooseScriptDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_specificChooseAppDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_chooseScriptDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_chooseAppDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_savePanelPath:(id)arg1 path:(id)arg2;
- (id)_panelPath:(id)arg1 domain:(short)arg2 defaultFolder:(unsigned int)arg3;
- (id)createSpecificItem:(id)arg1 info:(struct LSItemInfoRecord *)arg2;
- (unsigned long long)validateForDrop:(id)arg1 info:(struct LSItemInfoRecord *)arg2;
- (id)specificEvent;
- (id)specificTitle:(int)arg1;
- (id)specificIcon:(int)arg1;
- (id)specificMenu;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addSpecificItem:(id)arg1;
- (void)removeButtonPressed:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (void)mainViewDidLoad;
- (void)setEvents:(id)arg1;
- (id)frameworkBundle;
- (void)dragToPopup:(id)arg1 url:(id)arg2 isApplication:(BOOL)arg3;
- (void)fixupPopup:(id)arg1 event:(id)arg2;
- (void)handlePopup:(id)arg1;
- (void)dealloc;
- (void)didUnselect;
- (void)didSelect;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

