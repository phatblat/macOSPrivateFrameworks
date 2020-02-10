//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import "PXMutableLayoutPerformer.h"

@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
    long long _layoutAxis;
    double _layoutRatio;
    double _interItemSpacing;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_8c65c4f4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double layoutRatio; // @synthesize layoutRatio=_layoutRatio;
@property(nonatomic) long long layoutAxis; // @synthesize layoutAxis=_layoutAxis;
- (void)setChildren:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

// Remaining properties
@property(nonatomic) CDStruct_8c65c4f4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end
