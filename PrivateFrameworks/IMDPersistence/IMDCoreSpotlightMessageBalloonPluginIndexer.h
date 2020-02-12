//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>

#import "IMDCoreSpotlightIndexer.h"

@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>
{
}

+ (id)lpPluginPathsCustomKey;
+ (id)lpHasRichMediaCustomKey;
+ (BOOL)_richLinkPluginHasRichContentForItem:(id)arg1 attachmentPaths:(id)arg2;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)arg1;
+ (id)_newSummaryTextForPayloadData:(id)arg1 item:(id)arg2;
+ (id)lpDescriptionCustomKey;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

