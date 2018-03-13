//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

#import "TSUDownloadItem.h"

@class NSString;

@interface NSURL (DownloadItem) <TSUDownloadItem>
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (BOOL)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id *)arg4;
+ (BOOL)canHandleDownloadTask:(id)arg1;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL needsDownload;
@property(readonly) Class superclass;
@end

