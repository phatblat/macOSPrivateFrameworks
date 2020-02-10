//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PLSyncableObject.h"

@class NSDate, NSSet, NSString;

@protocol PLSyncableAsset <NSObject, PLSyncableObject>
@property(readonly, nonatomic) BOOL hasAdjustmentsOrLegacyAdjustments;
@property(readonly, copy, nonatomic) NSString *syncedAdjustmentFingerprint;
@property(readonly, nonatomic) id faceAdjustmentVersion;
@property(readonly, copy, nonatomic) NSDate *dateForComparingAdjustmentVersions;
@property(readonly, nonatomic) BOOL faceDetectionComplete;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(retain, nonatomic) NSSet *detectedFaces;
@property(readonly, retain, nonatomic) NSString *cloudIdentifier;
- (NSString *)syncDescription;
- (void)markForNeedingFaceDetection;
@end
