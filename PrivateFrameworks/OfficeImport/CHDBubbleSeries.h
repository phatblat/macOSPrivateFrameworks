//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CHDSeries.h>

@class CHDData;

@interface CHDBubbleSeries : CHDSeries
{
    CHDData *mSizeData;
    _Bool mBubble3D;
    _Bool mInvertIfNegative;
    _Bool mShowBubbleSize;
}

- (void).cxx_destruct;
- (void)setCategoryData:(id)arg1;
- (void)setShowBubbleSize:(_Bool)arg1;
- (_Bool)isShowBubbleSize;
- (void)setInvertIfNegative:(_Bool)arg1;
- (_Bool)isInvertIfNegative;
- (void)setBubble3D:(_Bool)arg1;
- (_Bool)isBubble3D;
- (void)setSizeData:(id)arg1;
- (id)sizeData;

@end

