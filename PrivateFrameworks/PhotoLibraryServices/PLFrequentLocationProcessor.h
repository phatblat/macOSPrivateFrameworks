//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLFrequentLocationProcessor : NSObject
{
}

+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
+ (id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)_dateIntervalForItems:(id)arg1;
+ (id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end

