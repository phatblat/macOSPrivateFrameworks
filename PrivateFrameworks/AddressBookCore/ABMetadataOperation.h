//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface ABMetadataOperation : NSOperation
{
    id <ABMetadataManager> _metadataManager;
    NSString *_addressBookPath;
    BOOL _addressBookTracksAllSources;
}

@property(readonly) id <ABMetadataManager> metadataManager; // @synthesize metadataManager=_metadataManager;
- (void).cxx_destruct;
- (void)stamp;
- (void)markUniqueIdsAsCompleted:(id)arg1;
- (void)markUniqueIdsAsPlanned:(id)arg1;
- (void)validateAllMetaDataForceRebuild:(BOOL)arg1;
- (void)writeMetadata:(id)arg1 toURL:(id)arg2;
- (void)markViewedForRecord:(id)arg1 tryAgain:(BOOL)arg2;
- (void)unlockInfo;
- (BOOL)lockInfo;
- (int)metadataJobType;
- (BOOL)addressBookTracksAllSources;
- (id)addressBookPath;
- (id)initWithMetadataManager:(id)arg1;

@end

