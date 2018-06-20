//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAlbumVersionsQuery.h>

@class NSDate, NSIndexSet, PFCoalescer, PFDispatchQueue, RDAdaptiveTimeCoalescer;

@interface RDVersionLongLivedQuery : RDAlbumVersionsQuery
{
    PFCoalescer *_queryCoalescer;
    double _coalesceTime;
    NSDate *_coalesceDate;
    RDAdaptiveTimeCoalescer *_timeCoalescer;
    PFDispatchQueue *_sendResultsQueue;
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_updatedIndexes;
    id <RDVersionLongLivedQueryDelegate> _delegate;
}

@property(nonatomic) __weak id <RDVersionLongLivedQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calculateUpdates:(id)arg1 from:(id)arg2 withUpdates:(id)arg3;
- (void)refreshFilter;
- (id)posterVersionUuidFromVersions:(id)arg1 persist:(BOOL)arg2;
- (id)posterVersionUuidFromVersions:(id)arg1;
- (void)sendResultsToObserver;
- (id)versionQueryResult;
- (void)invalidateIfChangedByNotification:(id)arg1 forKeyPaths:(id)arg2 withChangeType:(unsigned char)arg3;
- (void)internalInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlbum:(id)arg1 options:(id)arg2;

@end

