//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSButton, NSImageView, NSSearchField, NSString, NSTableView, NSTextField;

@interface IPAddLanguageSheetController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSTableView *_tableView;
    NSButton *_helpButton;
    NSButton *_addButton;
    NSImageView *_nonSystemLanguageIcon;
    NSTextField *_nonSystemLanguageLabel;
    NSSearchField *_searchField;
    NSArray *_systemLanguages;
    NSArray *_otherLanguages;
    NSArray *_filteredSystemLanguages;
    NSArray *_filteredOtherLanguages;
    CDUnknownBlockType _didEndBlock;
}

+ (void)runSheetForWindow:(id)arg1 systemLanguages:(id)arg2 otherLanguages:(id)arg3 showHelpButton:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
+ (void)runSheetForWindow:(id)arg1 systemLanguages:(id)arg2 otherLanguages:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(copy) CDUnknownBlockType didEndBlock; // @synthesize didEndBlock=_didEndBlock;
@property(retain) NSArray *filteredOtherLanguages; // @synthesize filteredOtherLanguages=_filteredOtherLanguages;
@property(retain) NSArray *filteredSystemLanguages; // @synthesize filteredSystemLanguages=_filteredSystemLanguages;
@property(retain) NSArray *otherLanguages; // @synthesize otherLanguages=_otherLanguages;
@property(retain) NSArray *systemLanguages; // @synthesize systemLanguages=_systemLanguages;
@property(retain) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) NSTextField *nonSystemLanguageLabel; // @synthesize nonSystemLanguageLabel=_nonSystemLanguageLabel;
@property(retain) NSImageView *nonSystemLanguageIcon; // @synthesize nonSystemLanguageIcon=_nonSystemLanguageIcon;
@property(retain) NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain) NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)searchStringChanged:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 typeForRow:(long long)arg2 index:(unsigned long long *)arg3;
- (void)showHelp:(id)arg1;
- (void)doCancel:(id)arg1;
- (void)doAdd:(id)arg1;
- (void)runSheetForWindow:(id)arg1 systemLanguages:(id)arg2 otherLanguages:(id)arg3 showHelpButton:(BOOL)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

