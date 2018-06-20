//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMetadataQueryDelegate.h"

@class NSFileManager, NSMetadataQuery, NSMutableArray, NSOperationQueue, NSString;

@interface SIUSourcesManager : NSObject <NSMetadataQueryDelegate>
{
    NSMutableArray *_esdItems;
    NSMetadataQuery *_theQuery;
    NSOperationQueue *_operationQueue;
    BOOL _liveUpdateQuery;
    NSMutableArray *_volumeItems;
    NSFileManager *_fsManager;
    struct __DASession *_daSession;
}

+ (id)sharedManager;
+ (id)requiredOSVersion;
@property(retain, nonatomic) NSMetadataQuery *theQuery; // @synthesize theQuery=_theQuery;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableArray *esdItems; // @synthesize esdItems=_esdItems;
@property(retain, nonatomic) NSFileManager *fsManager; // @synthesize fsManager=_fsManager;
@property(retain) NSMutableArray *volumeItems; // @synthesize volumeItems=_volumeItems;
- (void)queryDidUpdate:(id)arg1;
- (void)itemFinished:(id)arg1;
- (void)initalGatherComplete:(id)arg1;
- (void)terminateMetadataQuery;
- (void)startMetadataQuery;
- (id)searchScope;
- (BOOL)queryDataHasChanged:(id)arg1;
- (void)processEvent:(long long)arg1 forVolume:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initForLiveQuery:(BOOL)arg1;
- (id)validSourcesOfType:(long long)arg1;
- (id)sourceAtPath:(id)arg1;
- (void)rescanESDApplications;
- (id)availableSourcesOfType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

