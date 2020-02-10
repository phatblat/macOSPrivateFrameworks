//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGViewUserData.h"

@class NSColor, NSImage, NSSet, NSString, PXCuratedLibraryActionPerformer, PXCuratedLibrarySectionHeaderLayoutSpec;

@interface PXCuratedLibraryOverlayButtonConfiguration : NSObject <PXGViewUserData>
{
    BOOL _isSystemSymbolIcon;
    NSColor *_contentColor;
    NSColor *_highlightedContentColor;
    NSImage *_iconImage;
    NSImage *_tintedIconImage;
    NSImage *_highlightedIconImage;
    PXCuratedLibrarySectionHeaderLayoutSpec *_spec;
    PXCuratedLibraryActionPerformer *_actionPerformer;
    CDUnknownBlockType _actionHandler;
    long long _style;
    long long _segment;
    NSString *_iconImageName;
    NSString *_title;
    NSSet *_possibleTitles;
    NSString *_caption;
    struct NSEdgeInsets _imageEdgeInsets;
    struct NSEdgeInsets _hitTestOutsets;
}

+ (id)tintedImageCache;
+ (id)configurationWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
+ (id)configurationWithTitle:(id)arg1 spec:(id)arg2;
+ (id)configurationWithIconImageName:(id)arg1 spec:(id)arg2;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSSet *possibleTitles; // @synthesize possibleTitles=_possibleTitles;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL isSystemSymbolIcon; // @synthesize isSystemSymbolIcon=_isSystemSymbolIcon;
@property(readonly, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(nonatomic) struct NSEdgeInsets hitTestOutsets; // @synthesize hitTestOutsets=_hitTestOutsets;
@property(nonatomic) struct NSEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(nonatomic) long long segment; // @synthesize segment=_segment;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(readonly, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(readonly, nonatomic) NSImage *tintedIconImage; // @synthesize tintedIconImage=_tintedIconImage;
- (id)_tintedImage:(id)arg1 name:(id)arg2 withColor:(id)arg3;
@property(readonly, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) NSColor *highlightedContentColor; // @synthesize highlightedContentColor=_highlightedContentColor;
@property(readonly, nonatomic) NSColor *contentColor; // @synthesize contentColor=_contentColor;
- (id)_contentColorWhenHighlighted:(BOOL)arg1;
- (void)prepareForRender;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIconImageName:(id)arg1 title:(id)arg2 spec:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
