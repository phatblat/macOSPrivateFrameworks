//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSURLSessionDataTask, NSURLSessionDownloadTask, RMAsset;

@protocol RMAssetResolver
- (NSURLSessionDownloadTask *)downloadTaskWithAsset:(RMAsset *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (NSURLSessionDataTask *)dataTaskWithAsset:(RMAsset *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
@end

