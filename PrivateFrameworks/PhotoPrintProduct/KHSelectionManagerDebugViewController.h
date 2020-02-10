//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXTableViewController.h"

#import "KHSelectionObserver.h"

@class KHSelectionManager, NSArray, NSString;

@interface KHSelectionManagerDebugViewController : UXTableViewController <KHSelectionObserver>
{
    NSArray *_selections;
    KHSelectionManager *_selectionManager;
}

@property(readonly) KHSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (void).cxx_destruct;
- (void)selectionManager:(id)arg1 didRemoveSelections:(id)arg2;
- (void)selectionManager:(id)arg1 didModifySelections:(id)arg2;
- (void)selectionManager:(id)arg1 didTouchSelections:(id)arg2;
- (void)selectionManager:(id)arg1 didAddSelections:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)_toggleAppearance:(id)arg1;
- (id)initWithSelectionManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
