//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol PLVideoResourceContext <NSObject>
- (void)repairResource:(id <PLVideoResource>)arg1;
- (BOOL)validateResource:(id <PLVideoResource>)arg1;
- (id <PLVideoResource>)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;
- (double)sizeThresholdForHighQuality;
@end
