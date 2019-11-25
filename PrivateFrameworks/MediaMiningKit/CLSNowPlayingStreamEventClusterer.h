//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSNowPlayingStreamEventClusteringParameters, NSArray;

@interface CLSNowPlayingStreamEventClusterer : NSObject
{
    NSArray *_sessions;
    CLSNowPlayingStreamEventClusteringParameters *_clusteringParameters;
}

@property(readonly, nonatomic) CLSNowPlayingStreamEventClusteringParameters *clusteringParameters; // @synthesize clusteringParameters=_clusteringParameters;
@property(readonly, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
- (void).cxx_destruct;
- (id)_populateSessionsWithClusters:(id)arg1;
- (id)_dbScanClusterEvents:(id)arg1;
- (void)dbScanClusterEvents:(id)arg1;
- (void)naiveClusterEvents:(id)arg1;
- (void)clusterEvents:(id)arg1;
- (id)initWithClusteringParameters:(id)arg1;
- (id)init;

@end

