//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PKMobileAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAssetsForMarketWithIdentifier:(id)arg1 userInitiated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_sortDescriptorWithPreferredFeatureKey:(id)arg1 isFeaturePreferred:(BOOL)arg2 keyPath:(id)arg3;
- (id)sortDescriptorsForEducationVideoWithPreferredFeatures:(unsigned long long)arg1;
- (void)fetchEducationVideoWithPreferredFeatures:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchNeededAssetsForThisDeviceWithPreferredFeatures:(unsigned long long)arg1;
- (id)init;

@end

