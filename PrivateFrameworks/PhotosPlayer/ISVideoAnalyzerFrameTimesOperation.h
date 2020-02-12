//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class AVAsset, AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface ISVideoAnalyzerFrameTimesOperation : NSOperation
{
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_assetReaderOutput;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _trackID;
    AVAsset *_asset;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)_handleAssetDidLoadValues;
- (void)main;
- (id)initWithAsset:(id)arg1 trackID:(int)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

