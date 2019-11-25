//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FI_TNodeViewSettings, FI_TViewOptionsSettingsController, NSMenu, NSMenuItem;

__attribute__((visibility("hidden")))
@interface FI_TArrangeByMenuController : NSObject
{
    NSMenu *_arrangeByMenu;
    NSMenu *_sortByMenu;
    NSMenuItem *_selectedGroupMenuItem;
    NSMenuItem *_selectedSortMenuItem;
    int _selectedGroupByTag;
    int _selectedSortByTag;
    int _groupBy;
    int _sortBy;
    _Bool _inOpenSave;
    struct TNSWeakPtr<FI_TViewOptionsSettingsController, void> _weakViewOptionsSettingsController;
    struct TNSRef<FI_TNodeViewSettings, void> _viewSettings;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _keyValueBinders;
}

@property(nonatomic) _Bool inOpenSave; // @synthesize inOpenSave=_inOpenSave;
@property(nonatomic) int selectedSortByTag; // @synthesize selectedSortByTag=_selectedSortByTag;
@property(nonatomic) int selectedGroupByTag; // @synthesize selectedGroupByTag=_selectedGroupByTag;
@property(retain, nonatomic) NSMenu *sortByMenu; // @synthesize sortByMenu=_sortByMenu;
@property(retain, nonatomic) NSMenu *arrangeByMenu; // @synthesize arrangeByMenu=_arrangeByMenu;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)menuTagForSortBy:(int)arg1;
- (int)menuTagForGroupBy:(int)arg1;
- (void)removeCommandKeyEquivalents;
- (void)cmdSortByLabel:(id)arg1;
- (void)cmdSortBySize:(id)arg1;
- (void)cmdSortByDateCreated:(id)arg1;
- (void)cmdSortByDateModified:(id)arg1;
- (void)cmdSortByDateAdded:(id)arg1;
- (void)cmdSortByDateLastOpened:(id)arg1;
- (void)cmdSortByKind:(id)arg1;
- (void)cmdSortByName:(id)arg1;
- (void)cmdSortBySnapToGrid:(id)arg1;
- (void)cmdSortByNone:(id)arg1;
- (void)setSortBy:(int)arg1 menuItem:(id)arg2;
- (void)cmdArrangeByNone:(id)arg1;
- (void)cmdArrangeByLabel:(id)arg1;
- (void)cmdArrangeBySize:(id)arg1;
- (void)cmdArrangeByDateCreated:(id)arg1;
- (void)cmdArrangeByDateModified:(id)arg1;
- (void)cmdArrangeByDateAdded:(id)arg1;
- (void)cmdArrangeByDateLastOpened:(id)arg1;
- (void)cmdArrangeByApplicationCategory:(id)arg1;
- (void)cmdArrangeByVolume:(id)arg1;
- (void)cmdArrangeByFinderTags:(id)arg1;
- (void)cmdArrangeByApplication:(id)arg1;
- (void)cmdArrangeByKind:(id)arg1;
- (void)cmdArrangeByName:(id)arg1;
- (void)setGroupBy:(int)arg1 menuItem:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
@property(nonatomic) __weak FI_TViewOptionsSettingsController *viewOptionsSettingsController; // @dynamic viewOptionsSettingsController;
@property(retain, nonatomic) FI_TNodeViewSettings *viewSettings; // @dynamic viewSettings;
@property(nonatomic) int sortBy;
@property(nonatomic) int groupBy;
- (void)aboutToTearDown;
- (id)initWithViewSettings:(id)arg1;

@end

