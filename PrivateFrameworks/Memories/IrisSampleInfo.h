//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface IrisSampleInfo : NSObject
{
    NSArray *_timeRanges;
    NSArray *_gapTimeRanges;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDStruct_1b6d18a9 _dominantSampleDuration;
}

+ (id)infoForAsset:(id)arg1;
+ (void)clearCache;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) CDStruct_1b6d18a9 dominantSampleDuration; // @synthesize dominantSampleDuration=_dominantSampleDuration;
@property(retain, nonatomic) NSArray *gapTimeRanges; // @synthesize gapTimeRanges=_gapTimeRanges;
@property(retain, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (void).cxx_destruct;
- (void)loadInfoWithTrackOutput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1;

@end
