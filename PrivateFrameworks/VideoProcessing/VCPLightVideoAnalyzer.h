//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSArray, NSDictionary, NSMutableDictionary;

@interface VCPLightVideoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;
    AVAsset *_avAsset;
    struct CGAffineTransform _transform;
    NSArray *_metaTracks;
    NSMutableDictionary *_publicMutableResults;
    NSMutableDictionary *_privateMutableResults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *privateResults;
@property(readonly, nonatomic) NSDictionary *publicResults;
- (int)analyzeAsset:(CDUnknownBlockType)arg1 flags:(unsigned long long *)arg2;
- (int)checkTimeRangeConsistency;
- (int)processMetaTrackForType:(id)arg1 cancel:(CDUnknownBlockType)arg2 flags:(unsigned long long *)arg3;
- (id)findMetaTrackforType:(id)arg1;
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;

@end

