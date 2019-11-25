//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPClientStore.h"
#import "PPFeedbackAccepting.h"

@class NSString, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore>
{
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

- (void).cxx_destruct;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates;
- (CDUnknownBlockType)_recordGenerator;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)iterRankedContactsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;

@end

