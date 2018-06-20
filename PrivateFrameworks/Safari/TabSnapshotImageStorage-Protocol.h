//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSImage, NSSet, NSString, NSURL;

@protocol TabSnapshotImageStorage
- (void)finalizePendingOperationsBeforeTermination;
- (void)purgeImagesSavedOnOrAfter:(NSDate *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteImagesWithOriginURLs:(NSSet *)arg1 completionHandler:(void (^)(void))arg2;
- (void)deleteImagesWithUniqueIdentifiers:(NSSet *)arg1 completionHandler:(void (^)(void))arg2;
- (void)loadImageWithUniqueIdentifier:(NSString *)arg1 completionHandler:(void (^)(long long, NSImage *))arg2;
- (void)saveImage:(NSImage *)arg1 withUniqueIdentifier:(NSString *)arg2 creationDate:(NSDate *)arg3 originURL:(NSURL *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)setUpWithCompletionHandler:(void (^)(long long))arg1;
@end
