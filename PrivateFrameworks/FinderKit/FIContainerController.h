//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBrowserContainerController.h>

__attribute__((visibility("hidden")))
@interface FIContainerController : FI_TBrowserContainerController
{
    _Bool _historyDisabled;
}

+ (_Bool)_isMediaBrowserInTargetPath:(const struct TFENodeVector *)arg1;
+ (_Bool)_isMediaBrowserNode:(const struct TFENode *)arg1;
+ (unsigned long long)_mediaBrowserTypeForTargetPath:(const struct TFENodeVector *)arg1;
+ (unsigned long long)_mediaBrowserTypeForNode:(const struct TFENode *)arg1;
@property(nonatomic) _Bool historyDisabled; // @synthesize historyDisabled=_historyDisabled;
- (void)cmdToggleHideExtension:(id)arg1;
- (_Bool)validateToggleHideExtension:(id)arg1;
- (_Bool)hidesSharedSharedItems;
- (void)setHidesSharedItems:(_Bool)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (_Bool)shouldEnableShareButton;
- (_Bool)canShare;
- (_Bool)canMoveItemsToTrash;
- (_Bool)canDuplicateItems;
- (void)openLocation:(const struct TFENode *)arg1 origin:(shared_ptr_524a2e6c)arg2;
- (void)openSelection;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (_Bool)canClickDimmedNodes;
- (_Bool)allowsMultipleSelection;
- (_Bool)canSelectNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (_Bool)allowsBrowsingPackages;
- (void)prefetchEnableStates:(const struct TFENodeVector *)arg1;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)urlIsDimmed:(id)arg1;
- (_Bool)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (void)disableHistoryAndDoWork:(CDUnknownBlockType)arg1;
- (void)searchWasChanged;
- (void)searchTextChanged:(id)arg1;
- (void)searchFieldTextChanged;
- (struct TString)_backupBrowserSnapshotPath;
- (_Bool)inBrowseMode;
- (id)_historySearchTemplateMenu;
- (void)saveQuery:(_Bool)arg1;
- (void)viewDidSyncToDataSource:(const vector_ddb76938 *)arg1;
- (void)setViewStyle:(int)arg1;
- (void)setPreferredViewStyle:(int)arg1;
- (struct TFENode)_nodeForLastMediaBrowserMode;
- (void)addToHistory:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
- (void)addCurrentTargetPathToHistory;
- (void)backForwardCommon:(_Bool)arg1;
- (void)gotoHistoryEntry:(id)arg1;
@property(readonly, nonatomic) _Bool downloadsUbiquitousContents;
- (void)historyChanged;
- (_Bool)_updateViewStyle:(int)arg1;
- (void)aboutToTearDown;
- (void)destroyBrowserView:(_Bool)arg1;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (struct TFENodeVector)reduceRootedPath:(const struct TFENodeVector *)arg1;
- (_Bool)nodeIsOurICloud:(const struct TFENode *)arg1;
- (struct TFENode)_quickFollowAliasChainForNode:(const struct TFENode *)arg1;
- (struct TFENode)sidebarTarget;
- (_Bool)shouldShowSidebarSplitter;
- (_Bool)shouldShowPathBarForTarget:(const struct TFENode *)arg1;
- (Class)browserClassForViewStyle:(int)arg1;
- (void)_replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (_Bool)sidebarInitiallyVisible;
- (id)gutsController;

@end

