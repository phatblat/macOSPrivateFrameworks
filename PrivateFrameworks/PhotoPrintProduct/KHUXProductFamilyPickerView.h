//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class CAGradientLayer, NSMutableOrderedSet, NSView;

@interface KHUXProductFamilyPickerView : UXView
{
    NSView *_contentView;
    double _rowHeight;
    NSView *_leftPanel;
    NSView *_rightPanel;
    NSMutableOrderedSet *_productFamilyViews;
    unsigned long long _rowCount;
    double _leftInset;
    double _rightInset;
    double _interitemSpacing;
    double _columnWidth;
    double _autoRowHeight;
    double _autoLastRowHeight;
}

+ (id)defaultGradientColors;
+ (Class)layerClass;
@property(nonatomic) double autoLastRowHeight; // @synthesize autoLastRowHeight=_autoLastRowHeight;
@property(nonatomic) double autoRowHeight; // @synthesize autoRowHeight=_autoRowHeight;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) NSMutableOrderedSet *productFamilyViews; // @synthesize productFamilyViews=_productFamilyViews;
@property(readonly, nonatomic) NSView *rightPanel; // @synthesize rightPanel=_rightPanel;
@property(readonly, nonatomic) NSView *leftPanel; // @synthesize leftPanel=_leftPanel;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)addProductFamilyView:(id)arg1;
- (struct CGRect)frameForSubviewAtIndex:(unsigned long long)arg1;
- (void)updateGradientColors:(id)arg1;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

