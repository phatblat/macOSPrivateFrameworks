//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDPersonRejectedFaceNeedingFaceCropModel.h>

@class NSString;

@interface RDPersonRejectedFaceNeedingFaceCrop : RDPersonRejectedFaceNeedingFaceCropModel
{
}

+ (id)filterForRejectedFacesForPersonId:(long long)arg1 inDatabase:(id)arg2;
+ (id)rejectedFaceIdsForPersonId:(long long)arg1 inDatabase:(id)arg2;
+ (void)removeRejectedFacesWithFilter:(id)arg1 fromDatabase:(id)arg2;
+ (void)removeAllRejectedFacesForPersons:(id)arg1 fromDatabase:(id)arg2;
+ (void)removeFaces:(id)arg1 forPersonId:(long long)arg2 inDatabase:(id)arg3;
+ (void)addFaces:(id)arg1 forPersonId:(long long)arg2 inDatabase:(id)arg3;
+ (void)transferRejectedFacesNeedingFaceCropFromSourcePerson:(id)arg1 toTargetPerson:(id)arg2 faceIdListForSourcePerson:(id)arg3 faceIdListForTargetPerson:(id)arg4;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

