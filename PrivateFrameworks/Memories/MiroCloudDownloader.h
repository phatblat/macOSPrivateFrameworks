//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface MiroCloudDownloader : NSObject
{
    float _progress;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _itemCompletedBlock;
    double _totalInitialDownloadSize;
    NSMutableArray *_requests;
}

+ (id)cloudDownloaderWithAssets:(id)arg1;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) double totalInitialDownloadSize; // @synthesize totalInitialDownloadSize=_totalInitialDownloadSize;
@property(copy, nonatomic) CDUnknownBlockType itemCompletedBlock; // @synthesize itemCompletedBlock=_itemCompletedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *localAssets;
@property(readonly, nonatomic) unsigned long long nonLocalCount;
- (void)cancelDownloads;
@property(readonly) NSObject<OS_dispatch_queue> *cancellationQueueFor26820423;
- (void)startDownloadsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAssets:(id)arg1;

@end
