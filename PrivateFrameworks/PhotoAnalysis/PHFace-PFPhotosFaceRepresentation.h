//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHFace.h"

#import "PFPhotosFaceRepresentation.h"
#import "PVFaceProtocol.h"

@class NSData, NSString;

@interface PHFace (PFPhotosFaceRepresentation) <PFPhotosFaceRepresentation, PVFaceProtocol>
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationRoll;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (long long)photosFaceRepresentationQualityMeasure;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationHasSmile;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationCenterX;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
@property(nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;

// Remaining properties
@property(readonly, nonatomic) unsigned short ageType;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) double size;
@property(readonly) Class superclass;
@end

