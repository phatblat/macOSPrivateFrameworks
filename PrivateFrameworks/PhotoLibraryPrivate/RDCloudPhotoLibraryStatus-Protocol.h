//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class LiRidList, NSNumber, NSString;

@protocol RDCloudPhotoLibraryStatus

@optional
- (void)cloudPhotoLibraryVersionsNeedPreviewsRegenerated:(LiRidList *)arg1 changeType:(int)arg2 inDatabaseWithUuid:(NSString *)arg3;
- (void)cloudPhotoLibraryResourceDownloadDidProgress:(NSNumber *)arg1 forResourceWithModelId:(NSNumber *)arg2 inDatabaseWithUuid:(NSString *)arg3;
- (void)cloudPhotoLibraryActiveStatusChanged:(BOOL)arg1;
- (void)cloudPhotoLibraryConnected:(BOOL)arg1;
@end

