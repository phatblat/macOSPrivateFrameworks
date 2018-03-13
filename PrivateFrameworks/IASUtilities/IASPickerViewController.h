//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class IASMagicPocketScrollView, NSArray, NSArrayController, NSButton, NSCollectionView, NSLayoutConstraint;

@interface IASPickerViewController : NSViewController
{
    NSLayoutConstraint *_scrollerButtonWidthConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSCollectionView *_collectionView;
    NSArrayController *_itemArrayController;
    IASMagicPocketScrollView *_scroller;
    NSButton *_scrollLeftButton;
    NSButton *_scrollRightButton;
    NSArray *_content;
}

+ (void)initialize;
@property(retain) NSArray *content; // @synthesize content=_content;
@property __weak NSButton *scrollRightButton; // @synthesize scrollRightButton=_scrollRightButton;
@property __weak NSButton *scrollLeftButton; // @synthesize scrollLeftButton=_scrollLeftButton;
@property __weak IASMagicPocketScrollView *scroller; // @synthesize scroller=_scroller;
@property __weak NSArrayController *itemArrayController; // @synthesize itemArrayController=_itemArrayController;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property __weak NSLayoutConstraint *collectionViewWidthConstraint; // @synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint;
@property __weak NSLayoutConstraint *scrollerButtonWidthConstraint; // @synthesize scrollerButtonWidthConstraint=_scrollerButtonWidthConstraint;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)recalculateCollectionWidthConstraint;
- (void)pressedScrollRightButton:(id)arg1;
- (void)pressedScrollLeftButton:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

