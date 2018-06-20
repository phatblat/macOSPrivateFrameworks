//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@interface CUIThemeRendition : NSObject
{
    struct _renditionkeytoken _stackKey[18];
    struct _renditionkeytoken *_key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    int _exifOrientation;
    int _blendMode;
    struct cuithemerenditionrenditionflags _renditionFlags;
    long long _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    long long _validLookGradation;
    double _opacity;
    NSString *_utiType;
    struct CGImage *_uncroppedImage;
    struct CGSize _physicalSizeInMeters;
    NSDictionary *_properties;
}

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long artworkStatus; // @synthesize artworkStatus=_artworkStatus;
@property(readonly, nonatomic) NSData *srcData; // @synthesize srcData=_srcData;
@property(nonatomic) NSString *internalName; // @synthesize internalName=_name;
@property(nonatomic) long long internalTemplateRenderingMode; // @synthesize internalTemplateRenderingMode=_templateRenderingMode;
@property(nonatomic) unsigned int internalScale; // @synthesize internalScale=_scale;
@property(nonatomic) unsigned int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (int)objectVersion;
-     // Error parsing type: {?=[4]}16@0:8, name: transformation
- (struct CGImage *)uncroppedImage;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (id)contentNames;
- (id)mipLevels;
- (id)layerReferences;
- (id)externalTags;
- (id)assetPackIdentifier;
- (id)data;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;
- (struct CGPDFDocument *)pdfDocument;
- (id)effectPreset;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (id)sizeIndexes;
- (BOOL)substituteWithSystemColor;
- (id)systemColorName;
- (const struct _csicolor *)csiColor;
- (BOOL)edgesOnly;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (double)scale;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (struct CGImage *)unslicedImage;
- (id)textureImages;
- (id)provideTextureInfo;
- (id)description;
- (BOOL)isValidForLookGradation:(long long)arg1;
- (unsigned long long)colorSpaceID;
- (id)properties;
- (BOOL)isTintable;
- (BOOL)preservedVectorRepresentation;
- (BOOL)isFlippable;
- (BOOL)optOutOfThinning;
- (long long)templateRenderingMode;
- (int)bitmapEncoding;
- (BOOL)isOpaque;
- (BOOL)isVectorBased;
- (BOOL)isHeaderFlaggedFPO;
- (struct CGSize)physicalSizeInMeters;
- (id)utiType;
- (id)name;
- (const struct _renditionkeytoken *)key;
- (void)dealloc;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (int)pixelFormat;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)_initializePropertiesFromCSIData:(const struct _csiheader *)arg1;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (struct CGRect)_destinationFrame;
- (unsigned long long)sourceRowbytes;
- (struct CGSize)unslicedSize;
- (id)linkingToRendition;
- (BOOL)isInternalLink;
- (void)_setStructuredThemeStore:(id)arg1;
- (struct cuithemerenditionrenditionflags *)renditionFlags;
- (void)setName:(id)arg1;

@end

