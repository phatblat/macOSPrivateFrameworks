//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSMutableString, NSSet, NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCRGuideItem, SCRKeyboardKey;

__attribute__((visibility("hidden")))
@interface SCRGuide : NSObject
{
    NSString *_title;
    SCRGuide *_subguide;
    SCRGuide *_initialOpenSubguide;
    unsigned long long _selectedItemIndex;
    NSMutableArray *_unsortedItems;
    NSMutableArray *_typeAheadItems;
    BOOL _isOpen;
    SCRKeyboardKey *_hotKey;
    SCRGuideItem *_parentItem;
    NSLock *_lock;
    NSMutableString *_typeAheadString;
    SCRCThreadKey *_threadKey;
    NSMutableDictionary *_auxDictionary;
    BOOL _delegateRetained;
    id _delegate;
    int _tag;
    BOOL _isFirstOpen;
    SCRCTargetSelectorTimer *_moreItemsTimer;
    NSSet *_workspaceCommandSet;
    NSMutableArray *__guideItems;
}

@property(retain, nonatomic, setter=_setGuideItems:) NSMutableArray *_guideItems; // @synthesize _guideItems=__guideItems;
@property(retain, nonatomic) NSMutableString *typeAheadString; // @synthesize typeAheadString=_typeAheadString;
- (id)_lastWordForString:(id)arg1;
- (BOOL)_handleGestureTrackingEvent:(id)arg1 request:(id)arg2;
- (void)_handleOutputForIndexSelection:(unsigned long long)arg1 request:(id)arg2 shouldBraille:(BOOL)arg3;
- (BOOL)handlesEvents;
- (void)_restoreViewFinderFocus;
- (void)handleMouseClickForItemAtIndex:(long long)arg1;
- (void)handleTypeAheadWithKey:(id)arg1 request:(id)arg2;
- (BOOL)handleItemSelection:(id)arg1 outputRequest:(id)arg2;
- (id)threadDescription;
- (BOOL)_handleEvent:(id)arg1 request:(id)arg2;
- (void)addTopBoundaryOutputToRequest:(id)arg1;
- (void)_processEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (BOOL)_handleReadVisibleText:(id)arg1 request:(id)arg2 options:(long long)arg3;
- (BOOL)_isOpen;
- (void)_setIsOpen:(BOOL)arg1;
- (void)_closeWithOutputRequest:(id)arg1;
- (void)_sendBrailleLine;
- (void)_addDescriptionToOutputRequest:(id)arg1;
- (id)contextualHelpToSpeak;
- (void)_checkForMoreItems;
- (void)_addGuideItemsFromCallback:(id)arg1;
- (void)_threadSafeAddGuideItemsFromCallback:(id)arg1;
- (void)_openWithSelectionIndex:(unsigned long long)arg1 request:(id)arg2;
- (void)resetMoreItemsTimerWithDelay:(double)arg1;
- (void)_openRootWithOutputRequest:(id)arg1;
- (void)_openRootWithSelectionIndex:(unsigned long long)arg1 request:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1 retain:(BOOL)arg2;
- (void)close;
- (void)openWithSelectionIndex:(unsigned long long)arg1;
- (void)open;
- (id)itemForHotKey:(id)arg1;
- (id)_rootGuide;
- (id)_guidePath;
- (id)initialOpenSubguide;
- (void)setInitialOpenSubguide:(id)arg1;
- (id)_subguide;
- (void)_setSubguide:(id)arg1;
- (unsigned long long)numberOfItems;
@property(readonly, retain, nonatomic) NSArray *guideItemsIgnoringTypeahead;
@property(readonly, retain, nonatomic) NSArray *guideItems;
- (void)selectItem:(id)arg1 indexForView:(unsigned long long)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1 indexForView:(unsigned long long)arg2;
- (id)_arrayOfItemsWithTitleContainingString:(id)arg1;
- (unsigned long long)_indexOfItemWithTitleContainingString:(id)arg1;
- (unsigned long long)indexOfSelectedItem;
- (id)_deepestGuide;
- (id)selectedItem;
- (void)insertItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)sortItems:(long long)arg1 inRange:(struct _NSRange)arg2;
- (void)_refreshMenuWindow;
- (void)sortItems:(long long)arg1;
- (void)removeAllItems;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
- (void)addItemWithTitle:(id)arg1 command:(id)arg2 subguide:(id)arg3 target:(id)arg4 action:(id)arg5 tag:(int)arg6 info:(id)arg7;
- (void)addItemWithTitle:(id)arg1 key:(id)arg2 modifier:(long long)arg3 subguide:(id)arg4 target:(id)arg5 action:(id)arg6 tag:(int)arg7 info:(id)arg8;
- (void)addItemWithTitle:(id)arg1 key:(id)arg2 modifier:(long long)arg3 subguide:(id)arg4 info:(id)arg5;
- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(id)arg3 tag:(int)arg4 info:(id)arg5;
- (id)parentItem;
- (void)_setParentItem:(id)arg1;
- (id)spokenTitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)hotKey;
- (void)setHotKey:(id)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)_isFirstOpen;
- (void)_setIsFirstOpen:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (id)threadKey;

@end

