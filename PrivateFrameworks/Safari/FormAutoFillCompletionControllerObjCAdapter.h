//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionUIPresentationControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FormAutoFillCompletionControllerObjCAdapter : NSObject <NSTableViewDataSource, NSTableViewDelegate, CompletionUIPresentationControllerDelegate>
{
    // Error parsing type: ^{FormAutoFillCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}}, name: _completionController
    NSMutableSet *_completionAbortingNotificationNames;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)removeAutoFillControllerObserver:(id)arg1;
- (void)registerAutoFillControllerObserver:(id)arg1;
- (void)didRefreshCompletionListItems:(const Vector_92056f5f *)arg1;
- (void)_registerForCompletionAbortingNotificationNamed:(id)arg1 object:(id)arg2;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotifications;
- (BOOL)shouldAbortCompletionFromNotification:(id)arg1;
- (void)_abortCompletionFromNotification:(id)arg1;
- (id)_completionListTableView;
- (id)attributedStringForTableColumn:(id)arg1 row:(long long)arg2;
- (void)completionWindowDidHide;
- (void)completionWindowDidShow;
- (void)invalidate;
-     // Error parsing type: ^{FormAutoFillCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}}16@0:8, name: completionController
-     // Error parsing type: @24@0:8^{FormAutoFillCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}}16, name: initWithCompletionController:
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)arg1;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)arg1;
- (void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2;
- (long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)_updateSeparatorStateForItem:(struct CompletionListItem *)arg1 tableView:(id)arg2 rowView:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (BOOL)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsChecked:(long long)arg2;
- (BOOL)completionListTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

