//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

#import "NSCollectionViewReusable.h"
#import "NSCollectionViewSectionHeaderView.h"
#import "NSCollectionViewSectionHeaderViewPrivate.h"

@class FI_TButton, FI_TImageView, FI_TTextField, NSButton, NSImage, NSStackView, NSString;

__attribute__((visibility("hidden")))
@interface FI_TIconCollectionGroupHeaderView : FI_TUpdateLayerView <NSCollectionViewReusable, NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate>
{
    NSStackView *_stackView;
    FI_TImageView *_tagImageView;
    FI_TTextField *_titleField;
    FI_TButton *_collapseButton;
    FI_TUpdateLayerView *_topHorizontalLineView;
    struct TNSRef<FI_TUpdateLayerView *, void> _bottomHorizontalLineView;
    struct TNSRef<NSVisualEffectView *, void> _blurBackgroundView;
    unsigned long long _nodeCount;
    _Bool _isCollapsed;
    _Bool _isCollapseButtonHiddenManually;
    BOOL _isFloating;
}

+ (id)buttonTitleColor;
+ (id)buttonTitleFont;
+ (id)titleColor;
+ (id)titleFont;
+ (id)nibName;
@property(nonatomic, getter=isCollapseButtonHiddenManually) _Bool collapseButtonHiddenManually; // @synthesize collapseButtonHiddenManually=_isCollapseButtonHiddenManually;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_isCollapsed;
@property(nonatomic) unsigned long long nodeCount; // @synthesize nodeCount=_nodeCount;
- (id).cxx_construct;
- (void).cxx_destruct;
@property __weak NSButton *sectionCollapseButton;
@property(readonly) NSString *reuseIdentifier;
- (void)updateLayer;
- (void)layout;
- (void)_windowChangedKeyState;
@property(getter=isFloating) BOOL floating; // @synthesize floating=_isFloating;
- (void)setCollapseButtonPressedFunc:(const function_fa9a3333 *)arg1;
@property(nonatomic, getter=isCollapseButtonHidden) _Bool collapseButtonHidden; // @dynamic collapseButtonHidden;
@property(copy, nonatomic) NSString *titleStr; // @dynamic titleStr;
@property(retain, nonatomic) NSImage *tagImage; // @dynamic tagImage;
- (void)awakeFromNib;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

