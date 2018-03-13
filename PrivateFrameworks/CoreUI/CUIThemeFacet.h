//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUIThemeImageSource.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>
{
    struct _renditionkeytoken *_renditionKeyList;
    unsigned long long _themeIndex;
    long long _renditionType;
    struct CGSize _thumbnailSize;
    struct CGPoint _hotSpot;
    int _isTintable;
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;
}

+ (BOOL)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;
+ (id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1;
+ (void)themeUnregisterThemeRef:(unsigned long long)arg1;
+ (unsigned long long)themeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;
+ (void)initialize;
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;
+ (void)_invalidateArtworkCaches;
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
@property(readonly, copy) NSString *description;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;
- (void)_applyFixedAttributesToKey:(id)arg1;
- (struct CGSize)topLeftCapSize;
- (struct CGSize)thumbnailSize;
- (id)thumbnail;
- (id)displayName;
- (BOOL)isTintable;
- (long long)renditionType;
- (id)renditionKey;
- (id)themeRendition;
- (unsigned long long)themeIndex;
- (void)_setThemeIndex:(unsigned long long)arg1;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;
- (struct CGSize)sizeForSegmentOfType:(int)arg1;
- (struct CGSize)imageSize;
- (id)blendModeAsCAFilterString;
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1;
- (int)blendMode;
- (int)blendModeWithKeyAdjustment:(id)arg1;
- (double)alpha;
- (double)alphaWithKeyAdjustment:(id)arg1;
- (id)image;
- (id)imageForSliceIndex:(long long)arg1;
- (id)imageWithKeyAdjustment:(id)arg1;
- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;
- (id)imageForState:(long long)arg1 value:(long long)arg2;
- (BOOL)isValidButtonImageSource;
- (BOOL)isValidButtonImageSourceForSize:(unsigned long long)arg1;
- (BOOL)hasValueSlices;
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;
- (id)imageForState:(long long)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext *)arg4;
- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect)arg3 context:(struct CGContext *)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(BOOL)arg8 effects:(id)arg9;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(BOOL)arg7 effects:(id)arg8;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 isFocused:(int)arg4 isFlipped:(BOOL)arg5 effects:(id)arg6;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6;
- (id)renditionForSpecificKeyWrapper:(id)arg1;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(struct CGContext *)arg6;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext *)arg6;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5;
- (BOOL)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (BOOL)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4;
- (struct CGImage *)copySegmentLayerContents:(int)arg1 andCenter:(struct CGRect *)arg2 leftSeparatorWidth:(double)arg3 rightSeparatorWidth:(double)arg4 renditionKey:(id)arg5 effects:(id)arg6;
- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(struct CGContext *)arg5 effects:(id)arg6;
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3;
- (void)updateLayer:(id)arg1 effects:(id)arg2;
- (void)updateLayer:(id)arg1;
- (id)makeLayer;
- (id)_makeLayerFromCAPackageData;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;
- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;
- (void)setControlSize:(long long)arg1;
- (long long)controlSize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
- (void)_initWithRenditionKey:(id)arg1;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize)arg2 isMask:(BOOL)arg3;
- (BOOL)_isButtonGlyph;
- (void)_setIsButtonGlyph:(BOOL)arg1;
- (void)_setHasCheckedButtonGlyph:(BOOL)arg1;
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(char *)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (struct CGPoint)_hotSpot;
- (id)_themeStore;
- (id)_initWithSystemRenditionKeyList:(struct _renditionkeytoken *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

