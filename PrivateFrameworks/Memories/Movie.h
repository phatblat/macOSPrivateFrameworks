//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PHAssetRepresentationPersistenceObserver.h"
#import "PHPhotoLibraryChangeObserver.h"

@class CLLocation, MapLocation, NSDate, NSDictionary, NSString, NSURL, PHAsset, PHAssetRepresentation, Project;

__attribute__((visibility("hidden")))
@interface Movie : NSObject <PHAssetRepresentationPersistenceObserver, PHPhotoLibraryChangeObserver, NSCoding, NSCopying>
{
    BOOL _titleIsLocalizable;
    BOOL _favorite;
    int _availability;
    NSURL *_identifierURL;
    NSDate *_creationDate;
    CLLocation *_location;
    MapLocation *_mapLocation;
    NSDictionary *_userInfo;
    NSString *_assetFingerprint;
    NSString *_masterAssetFingerprint;
    double _durationInSeconds;
    PHAsset *_phAsset;
    PHAssetRepresentation *_phAssetRepresentation;
    Project *_weakProject;
}

+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;
+ (void)mediaserverdCrashed;
+ (void)replaceURL:(id)arg1 withURL:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak Project *weakProject; // @synthesize weakProject=_weakProject;
@property(retain, nonatomic) PHAssetRepresentation *phAssetRepresentation; // @synthesize phAssetRepresentation=_phAssetRepresentation;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(retain, nonatomic) NSString *masterAssetFingerprint; // @synthesize masterAssetFingerprint=_masterAssetFingerprint;
@property(retain, nonatomic) NSString *assetFingerprint; // @synthesize assetFingerprint=_assetFingerprint;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(nonatomic) int availability; // @synthesize availability=_availability;
@property(nonatomic) BOOL titleIsLocalizable; // @synthesize titleIsLocalizable=_titleIsLocalizable;
@property(retain, nonatomic) MapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSURL *identifierURL; // @synthesize identifierURL=_identifierURL;
- (void).cxx_destruct;
- (BOOL)isUnsupportedFormat;
- (int)duration;
- (struct CGAffineTransform)transform;
- (BOOL)isKenBurnsMovie;
- (BOOL)hasAudioTracks;
- (unsigned int)videoCodec;
- (BOOL)hasVideoTracks;
- (BOOL)isMono;
- (float)frameRate;
- (struct CGSize)encodedPixelSizeWithTransform;
- (struct CGSize)encodedPixelSize;
- (struct CGSize)naturalSizeWithTransform;
- (struct CGSize)naturalSize;
- (BOOL)isTimelapse;
- (BOOL)isHighFrameRate;
- (void)updateDuration;
- (void)updateCreationDate;
- (void)updateLocation;
- (void)updateAsset;
- (void)updateMetadata;
- (id)plistRepresentation;
- (BOOL)attemptRepairWithFingerprint;
- (BOOL)isDeleted;
- (BOOL)isOffline;
- (BOOL)isOnline;
- (void)updateAssetAvailability;
- (void)persistenceStateOfAssetRepresentationDidChange:(id)arg1;
- (void)updateFavorite;
- (void)syncFavorite;
- (void)photoLibraryDidChange:(id)arg1;
- (id)resolveRelativePath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)decodeIdentifierURLWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)mediaserverdCrashed;
- (void)replaceURL:(id)arg1 withURL:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAssetRepresentation:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1 userInfo:(id)arg2;
- (id)initWithIdentifierURL:(id)arg1;
- (void)stealthlySetIdentifierURL:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (void)removeFromList;
- (void)addToList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
