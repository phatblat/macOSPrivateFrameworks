//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineTransportTask.h"

@class CPLEngineResourceDownloadTask, NSArray;

@protocol CPLEngineTransportResourcesDownloadTask <CPLEngineTransportTask>
@property(copy, nonatomic) NSArray *downloadTasks;
- (void)cancelDownloadTask:(CPLEngineResourceDownloadTask *)arg1;
@end

