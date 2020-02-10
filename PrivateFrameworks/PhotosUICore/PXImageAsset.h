//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXDisplayAsset.h"

@class NSDate, NSImage, NSString;

@interface PXImageAsset : NSObject <PXDisplayAsset>
{
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    NSImage *_image;
}

@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property(readonly, nonatomic) BOOL isInCloud;
@property(readonly, nonatomic) BOOL representsBurst;
@property(readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
@property(readonly, nonatomic) NSString *uuid;

@end
