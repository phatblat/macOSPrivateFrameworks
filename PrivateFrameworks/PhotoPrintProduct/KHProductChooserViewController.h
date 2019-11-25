//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionViewController.h"

#import "KHProductViewDelegate.h"
#import "UXCollectionViewDataSource.h"
#import "UXCollectionViewDelegate.h"

@class NSDictionary, NSSet, NSString, UXBarButtonItem, UXLabel;

@interface KHProductChooserViewController : UXCollectionViewController <UXCollectionViewDataSource, UXCollectionViewDelegate, KHProductViewDelegate>
{
    unsigned long long _viewDidAppearCalls;
    BOOL _compactMode;
    BOOL _productsUpdated;
    id <KHProductChooserViewControllerDelegate> _delegate;
    UXBarButtonItem *_cancelButtonItem;
    NSDictionary *_configurationOptions;
    NSSet *_chosenProducts;
    UXLabel *_bottomNoticeLabel;
}

@property(nonatomic) BOOL productsUpdated; // @synthesize productsUpdated=_productsUpdated;
@property(nonatomic) BOOL compactMode; // @synthesize compactMode=_compactMode;
@property(retain, nonatomic) UXLabel *bottomNoticeLabel; // @synthesize bottomNoticeLabel=_bottomNoticeLabel;
@property(nonatomic) __weak NSSet *chosenProducts; // @synthesize chosenProducts=_chosenProducts;
@property(retain, nonatomic) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
@property(readonly, nonatomic) UXBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(nonatomic) __weak id <KHProductChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)themeChooserViewControllerBackButtonTitle;
- (void)productWasSelected:(id)arg1;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)sizeOfCollectionViewCell;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)_disableScroll;
- (void)_enableScroll;
- (void)setBottomNoticeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateBottomNoticeWithProduct:(id)arg1;
- (void)_initBottomNotice;
- (void)changeStoreNotificationReceived;
- (void)updatePricesInfo;
- (void)setCompactMode:(BOOL)arg1 forced:(BOOL)arg2;
- (void)windowDidResize:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)didSelectProduct:(id)arg1 withConfigurationOptions:(id)arg2;
- (long long)projectType;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

