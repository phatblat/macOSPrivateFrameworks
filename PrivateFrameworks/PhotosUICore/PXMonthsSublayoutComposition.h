//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class NSIndexSet, PXMonthsLayoutGenerator, PXMonthsLayoutMetrics;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition
{
    NSIndexSet *_indexesOfChapterHeaders;
    NSIndexSet *_indexesOfHeroes;
    PXMonthsLayoutGenerator *_layoutGenerator;
    PXMonthsLayoutMetrics *_metrics;
}

@property(copy, nonatomic) PXMonthsLayoutMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL presentedSingleColumn;
- (id)configuredLayoutGenerator;
- (void)updateSublayoutAttributes;

@end

