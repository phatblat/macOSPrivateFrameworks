//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPCustomDonation : NSObject
{
}

+ (BOOL)donateParsecNamedEntitiesAndTopics:(id)arg1 rawQuery:(id)arg2 reformulatedQuery:(id)arg3 source:(id)arg4 error:(id *)arg5;
+ (BOOL)donatePhotosTopics:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id *)arg4;
+ (id)_photosTopicMap;
+ (BOOL)donatePhotosNamedEntities:(id)arg1 bundleId:(id)arg2 date:(id)arg3 error:(id *)arg4;
+ (BOOL)donatePhotosLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
+ (BOOL)donatePhotosOneUpLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
+ (BOOL)donateSiriQuery:(id)arg1 results:(id)arg2 error:(id *)arg3;

@end
