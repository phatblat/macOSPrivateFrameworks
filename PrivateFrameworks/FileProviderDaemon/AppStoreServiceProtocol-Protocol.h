//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol AppStoreServiceProtocol
- (void)startOperation:(id <FPOperationClient>)arg1 toFetchAppStoreIconsForAppBundleIDs:(NSArray *)arg2 desiredSizeToScale:(struct CGSize)arg3 completionHandler:(void (^)(NSError *))arg4;
@end
