//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLSession.h"

@interface NSURLSession (WBSNSURLSessionExtras)
+ (id)safari_sharedSession;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandlerIncludingErrors:(CDUnknownBlockType)arg2;
- (void)safari_downloadImageWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_downloadFirstValidImageWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_safari_downloadFirstValidImageWithURLs:(id)arg1 failedURLDownloadsToErrorsDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

