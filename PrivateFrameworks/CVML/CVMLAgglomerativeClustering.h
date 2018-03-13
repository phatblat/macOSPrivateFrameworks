//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CVMLClustering.h"

@class NSMutableArray, NSMutableDictionary;

@interface CVMLAgglomerativeClustering : NSObject <CVMLClustering>
{
    NSMutableArray *distances_map;
    BOOL _debugMode;
    NSMutableDictionary *_faceIdsMapping;
}

@property BOOL debugMode; // @synthesize debugMode=_debugMode;
@property(retain) NSMutableDictionary *faceIdsMapping; // @synthesize faceIdsMapping=_faceIdsMapping;
- (void).cxx_destruct;
- (BOOL)cancelClustering:(id *)arg1;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id *)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (void)_addFaceId:(id)arg1 withSimilarityMatrix:(id)arg2;
- (BOOL)addFaceIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id *)arg3;
- (BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

