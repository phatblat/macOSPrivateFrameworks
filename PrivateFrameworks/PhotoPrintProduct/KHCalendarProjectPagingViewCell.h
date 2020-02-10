//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectPagingViewCell.h>

@class NSMutableArray, UXImageView;

@interface KHCalendarProjectPagingViewCell : KHProjectPagingViewCell
{
    UXImageView *_openWireImageView;
    UXImageView *_closedWireImageView;
    UXImageView *_topHoleImageView;
    UXImageView *_bottomHoleImageView;
    NSMutableArray *_wireHeightConstraints;
}

+ (struct CGSize)contentViewSizeForLayouts:(id)arg1 layoutScale:(double)arg2;
@property(retain, nonatomic) NSMutableArray *wireHeightConstraints; // @synthesize wireHeightConstraints=_wireHeightConstraints;
@property(readonly, nonatomic) UXImageView *bottomHoleImageView; // @synthesize bottomHoleImageView=_bottomHoleImageView;
@property(readonly, nonatomic) UXImageView *topHoleImageView; // @synthesize topHoleImageView=_topHoleImageView;
@property(readonly, nonatomic) UXImageView *closedWireImageView; // @synthesize closedWireImageView=_closedWireImageView;
@property(readonly, nonatomic) UXImageView *openWireImageView; // @synthesize openWireImageView=_openWireImageView;
- (void).cxx_destruct;
- (void)selectionManager:(id)arg1 didAddSelections:(id)arg2;
- (void)configureAccessoryButton:(id)arg1 forLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateDecorationsForProjectLayouts:(id)arg1;
- (id)canvasLayoutForProjectLayouts:(id)arg1;
- (void)configureDecorations;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
