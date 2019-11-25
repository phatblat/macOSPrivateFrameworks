//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSURL, NSUUID, SPBeaconPayloadCacheSearchCriteria;

@protocol SPBeaconPayloadCaching <NSObject>
- (void)beaconAdvertisementAtFileURL:(NSURL *)arg1 beaconIdentifier:(NSUUID *)arg2 scanDate:(NSDate *)arg3 completion:(void (^)(SPBeaconAdvertisement *, NSError *))arg4;
- (void)beaconPayloadsForSearchCriteria:(SPBeaconPayloadCacheSearchCriteria *)arg1 completion:(void (^)(SPBeaconPayloadCacheSearchResult *))arg2;
- (void)markBeaconPayloadsProcessed:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveBeaconPayloads:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end

