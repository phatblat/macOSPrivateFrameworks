//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAssetResource.h"

@interface PHAssetResource (MediaAnalysis)
+ (id)vcp_allResourcesForAsset:(id)arg1;
- (struct CGSize)vcp_size;
- (unsigned long long)vcp_fileSize;
- (BOOL)vcp_isLocallyAvailable;
- (BOOL)vcp_isDecodable;
- (BOOL)vcp_isPhotoResourceUsable:(BOOL)arg1;
- (BOOL)vcp_isVideoResourceUsable:(BOOL)arg1;
- (BOOL)vcp_isPhoto;
- (BOOL)vcp_isMovie;
- (id)vcp_avAsset;
@end

