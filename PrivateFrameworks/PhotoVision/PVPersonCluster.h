//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PVPersonProtocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface PVPersonCluster : NSObject <PVPersonProtocol>
{
    unsigned long long _hash;
    BOOL _highlyInteresting;
    BOOL _quarantined;
    id <PVPhotoLibraryProtocol> _photoLibrary;
    id <PVPersonProtocol> _sourcePerson;
    id <PVFaceGroupProtocol> _sourceFaceGroup;
    NSMutableSet *_mergedPersonIdentifiers;
    NSMutableSet *_backingFaceIdentifiers;
    NSMutableSet *_backingAssetIdentifiers;
    NSSet *_sourcePersonBackingAssetIdentifiers;
    NSMutableSet *_backingMomentIdentifiers;
    double _interestingScore;
    NSMutableDictionary *_backingFaceIdentifiersByMomentIdentifiers;
    NSMutableDictionary *_representativeFaceByFaceIdentifiers;
    NSDate *_lastSeenDate;
    NSDate *_firstSeenDate;
}

@property(retain, nonatomic) NSDate *firstSeenDate; // @synthesize firstSeenDate=_firstSeenDate;
@property(retain, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(nonatomic) BOOL quarantined; // @synthesize quarantined=_quarantined;
@property(nonatomic) BOOL highlyInteresting; // @synthesize highlyInteresting=_highlyInteresting;
@property(retain, nonatomic) NSMutableDictionary *representativeFaceByFaceIdentifiers; // @synthesize representativeFaceByFaceIdentifiers=_representativeFaceByFaceIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *backingFaceIdentifiersByMomentIdentifiers; // @synthesize backingFaceIdentifiersByMomentIdentifiers=_backingFaceIdentifiersByMomentIdentifiers;
@property(nonatomic) double interestingScore; // @synthesize interestingScore=_interestingScore;
@property(retain, nonatomic) NSMutableSet *backingMomentIdentifiers; // @synthesize backingMomentIdentifiers=_backingMomentIdentifiers;
@property(retain, nonatomic) NSSet *sourcePersonBackingAssetIdentifiers; // @synthesize sourcePersonBackingAssetIdentifiers=_sourcePersonBackingAssetIdentifiers;
@property(retain, nonatomic) NSMutableSet *backingAssetIdentifiers; // @synthesize backingAssetIdentifiers=_backingAssetIdentifiers;
@property(retain, nonatomic) NSMutableSet *backingFaceIdentifiers; // @synthesize backingFaceIdentifiers=_backingFaceIdentifiers;
@property(retain, nonatomic) NSMutableSet *mergedPersonIdentifiers; // @synthesize mergedPersonIdentifiers=_mergedPersonIdentifiers;
@property(retain, nonatomic) id <PVFaceGroupProtocol> sourceFaceGroup; // @synthesize sourceFaceGroup=_sourceFaceGroup;
@property(retain, nonatomic) id <PVPersonProtocol> sourcePerson; // @synthesize sourcePerson=_sourcePerson;
@property(nonatomic) __weak id <PVPhotoLibraryProtocol> photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)invalidateCaches;
- (void)_cacheDates;
@property(readonly, nonatomic) double libraryTimespan;
- (void)pv_addMergeCandidatePersons:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) BOOL favorite;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(readonly, nonatomic) long long verifiedType;
@property(nonatomic) BOOL isVerified;
@property(readonly, nonatomic) NSString *localIdentifier;
- (id)personLocalIdentifiers;
- (id)fetchMoments;
- (id)fetchAssets;
- (id)fetchFaces;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithFaceGroup:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)initWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

