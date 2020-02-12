//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage, NSData, NSString, NSURL;

@interface PVImage : NSObject
{
    unsigned int _orientation;
    unsigned long long _assetWidth;
    unsigned long long _assetHeight;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _orientedWidth;
    unsigned long long _orientedHeight;
    unsigned long long _bytesPerRow;
    id _adjustmentVersion;
    NSString *_groupingIdentifier;
    CIImage *_CIImage;
    struct CGImage *_CGImage;
    NSURL *_imageURL;
    NSData *_imageData;
}

+ (id)imageWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
+ (id)imageWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
+ (id)imageWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned int)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
+ (id)imageWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property(readonly, nonatomic) CIImage *CIImage; // @synthesize CIImage=_CIImage;
@property(readonly, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
@property(readonly, copy, nonatomic) id adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(readonly, nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long orientedHeight; // @synthesize orientedHeight=_orientedHeight;
@property(readonly, nonatomic) unsigned long long orientedWidth; // @synthesize orientedWidth=_orientedWidth;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long assetHeight; // @synthesize assetHeight=_assetHeight;
@property(readonly, nonatomic) unsigned long long assetWidth; // @synthesize assetWidth=_assetWidth;
- (void).cxx_destruct;
- (struct CGRect)imageRectForNormalizedRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (id)initWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (id)initWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned int)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4;

@end

