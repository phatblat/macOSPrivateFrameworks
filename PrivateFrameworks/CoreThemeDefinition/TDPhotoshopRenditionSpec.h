//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec
{
}

- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (id)imageFromPSDPreviewImage:(id)arg1;
- (int)_layerIndexInPSDImage:(id)arg1;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 auxiliary1MetricsMask:(id)arg6 auxiliary2MetricsMask:(id)arg7 colorSpaceID:(unsigned long long)arg8;
- (CDStruct_1ba92a5e)_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect)arg1 metrics:(CDStruct_1ba92a5e)arg2 renditionRect:(struct CGRect)arg3;
- (BOOL)_sliceRectanglesForPSDImage:(id)arg1 rowsPerRendition:(int *)arg2 columnsPerRendition:(int *)arg3 originalColumnWidth:(int *)arg4 newColumnWidth:(int *)arg5 originalRowHeight:(int *)arg6 newRowHeight:(int *)arg7 originalColumnX:(int *)arg8 originalRowY:(int *)arg9 newRenditionSize:(CDStruct_1ef3fb1f *)arg10 newSliceCount:(int *)arg11 renditionRect:(struct CGRect *)arg12 throwawaySliceRect:(struct CGRect *)arg13;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)debugDescription;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;

// Remaining properties
@property(nonatomic) BOOL isTintable; // @dynamic isTintable;
@property(retain, nonatomic) TDPhotoshopLayer *photoshopLayer; // @dynamic photoshopLayer;

@end

