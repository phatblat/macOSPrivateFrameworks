//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGuide.h>

@class NSArray, NSMutableArray, NSSet, SCRApplication, SCRChooserItemResult, SCRElement, SCRGuideItem;

__attribute__((visibility("hidden")))
@interface SCRRemoteGuide : SCRGuide
{
    BOOL _isCreatingMoreRemoteGuideItems;
    BOOL _isFinishedCreatingAllRemoteGuideItems;
    BOOL _isFinishedCreatingAllRemoteTypeAheadGuideItems;
    BOOL _isCreatingAllLocalGuideItems;
    BOOL _isFinishedCreatingAllLocalGuideItems;
    BOOL _supportsContentChooser;
    BOOL _allowTypeAhead;
    BOOL _isBidirectionalDynamicLoadStyle;
    SCRApplication *_application;
    SCRElement *_containerElement;
    NSMutableArray *_remoteGuideItems;
    NSArray *_localTypeAheadGuideItems;
    NSMutableArray *_remoteResults;
    NSMutableArray *_remoteTypeAheadResults;
    NSMutableArray *_remoteTypeAheadGuideItems;
    NSSet *_searchKeys;
    SCRGuideItem *_loadingGuideItem;
}

@property(nonatomic) BOOL isBidirectionalDynamicLoadStyle; // @synthesize isBidirectionalDynamicLoadStyle=_isBidirectionalDynamicLoadStyle;
@property(nonatomic) BOOL allowTypeAhead; // @synthesize allowTypeAhead=_allowTypeAhead;
@property(nonatomic) BOOL supportsContentChooser; // @synthesize supportsContentChooser=_supportsContentChooser;
@property(nonatomic) BOOL isFinishedCreatingAllLocalGuideItems; // @synthesize isFinishedCreatingAllLocalGuideItems=_isFinishedCreatingAllLocalGuideItems;
@property(nonatomic) BOOL isCreatingAllLocalGuideItems; // @synthesize isCreatingAllLocalGuideItems=_isCreatingAllLocalGuideItems;
@property(retain, nonatomic) NSSet *searchKeys; // @synthesize searchKeys=_searchKeys;
@property(retain, nonatomic) NSMutableArray *remoteTypeAheadGuideItems; // @synthesize remoteTypeAheadGuideItems=_remoteTypeAheadGuideItems;
@property(retain, nonatomic) NSMutableArray *remoteTypeAheadResults; // @synthesize remoteTypeAheadResults=_remoteTypeAheadResults;
@property(retain, nonatomic) NSMutableArray *remoteResults; // @synthesize remoteResults=_remoteResults;
@property(retain, nonatomic) NSArray *localTypeAheadGuideItems; // @synthesize localTypeAheadGuideItems=_localTypeAheadGuideItems;
@property(retain, nonatomic) NSMutableArray *remoteGuideItems; // @synthesize remoteGuideItems=_remoteGuideItems;
@property(nonatomic) BOOL isFinishedCreatingAllRemoteTypeAheadGuideItems; // @synthesize isFinishedCreatingAllRemoteTypeAheadGuideItems=_isFinishedCreatingAllRemoteTypeAheadGuideItems;
@property(nonatomic) BOOL isFinishedCreatingAllRemoteGuideItems; // @synthesize isFinishedCreatingAllRemoteGuideItems=_isFinishedCreatingAllRemoteGuideItems;
@property(nonatomic) BOOL isCreatingMoreRemoteGuideItems; // @synthesize isCreatingMoreRemoteGuideItems=_isCreatingMoreRemoteGuideItems;
@property(retain, nonatomic) SCRElement *containerElement; // @synthesize containerElement=_containerElement;
@property(retain, nonatomic) SCRApplication *application; // @synthesize application=_application;
- (BOOL)_handleEvent:(id)arg1 request:(id)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1 indexForView:(unsigned long long)arg2;
- (id)guideItems;
- (void)handleTypeAheadWithKey:(id)arg1 request:(id)arg2;
- (BOOL)handleItemSelection:(id)arg1 outputRequest:(id)arg2;
- (void)_selectGuideItemAtIndex:(unsigned long long)arg1 request:(id)arg2;
- (void)selectGuideItemAtIndex:(unsigned long long)arg1 shouldGenerateOutput:(BOOL)arg2;
- (void)reload;
- (void)_cancelRemoteOperation;
- (void)dispatchCancelRemoteOperation;
- (void)_addRemoteTypeAheadResultsForSearchKeys:(id)arg1 remoteTypeAheadResults:(id)arg2 remoteTypeAheadGuideItems:(id)arg3 typeAheadString:(id)arg4 limit:(id)arg5;
- (BOOL)_shouldAddRemoteGuideItems;
- (void)_addRemoteGuideItemsWithLimit:(id)arg1 direction:(id)arg2;
- (void)_addRemoteResultsForGuideInfo:(id)arg1;
- (void)dispatchAddRemoteTypeAheadResultsForSearchKeys:(id)arg1 remoteTypeAheadResults:(id)arg2 remoteTypeAheadGuideItems:(id)arg3 typeAheadString:(id)arg4 limit:(id)arg5;
- (void)dispatchAddRemoteGuideItemsWithLimit:(unsigned long long)arg1 direction:(long long)arg2;
- (void)dispatchAddRemoteGuideItemsWithLimit:(unsigned long long)arg1;
- (void)dispatchAddRemoteResultsForRemoteGuideInfo:(id)arg1;
- (void)addAllLocalGuideItems;
- (void)_addLocalGuideItems:(id)arg1 rotorType:(id)arg2;
- (void)dispatchAddLocalGuideItems:(id)arg1 rotorType:(id)arg2;
- (BOOL)currentRotorHasRotorType:(id)arg1;
- (void)_updateStatusWithItemCount:(unsigned long long)arg1 isFinishedLoading:(BOOL)arg2 request:(id)arg3;
- (void)addTopBoundaryOutputToRequest:(id)arg1;
- (BOOL)_isShowingTypeAhead;
- (void)_updateGuideViewTitleWithTypeAheadString:(id)arg1;
- (BOOL)_isHandlingTypeAhead;
- (id)_filteredGuideItemsWithGuideItems:(id)arg1 containingTitleString:(id)arg2;
- (void)updateSearchKeysWithRotorType:(id)arg1;
- (id)initWithApplication:(id)arg1 containerElement:(id)arg2 title:(id)arg3;
- (void)dealloc;
- (BOOL)isDisplayingContentChooser;
@property(readonly, nonatomic) SCRGuideItem *loadingGuideItem; // @synthesize loadingGuideItem=_loadingGuideItem;
@property(readonly, nonatomic) SCRChooserItemResult *lastRemoteTypeAheadResult;
@property(readonly, nonatomic) SCRChooserItemResult *firstRemoteResult;
@property(readonly, nonatomic) SCRChooserItemResult *lastRemoteResult;
@property(readonly, nonatomic) BOOL isLoadingItems;

@end

