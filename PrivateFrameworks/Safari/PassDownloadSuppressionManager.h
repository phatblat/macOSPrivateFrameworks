//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/DisruptiveUISuppressionManager.h>

__attribute__((visibility("hidden")))
@interface PassDownloadSuppressionManager : DisruptiveUISuppressionManager
{
}

- (void)reset;
@property(readonly, nonatomic) BOOL isRequestQueueIsFull;
- (void)showQueuedPassFromDownload:(id)arg1;
- (void)handleNextPassDownload;
- (id)_dequeuePassDownloadRequest;
- (void)enqueuePassDownload:(id)arg1;

@end
