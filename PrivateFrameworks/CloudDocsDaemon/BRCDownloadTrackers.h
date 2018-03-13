//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadTrackers : NSObject
{
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}

- (void).cxx_destruct;
- (BOOL)hasPendingTrackerForDocumentID:(id)arg1;
- (unsigned long long)spaceRequiredForTrackers;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)removeDownloadTracker:(id)arg1;
- (void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2;
- (id)initWithSession:(id)arg1;

@end

