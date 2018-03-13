//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHRecognitionSessionObserver.h"

@class CHRecognitionSession, CHRecognitionSessionResult, NSObject<OS_dispatch_queue>, NSString;

@interface CHQuery : NSObject <CHRecognitionSessionObserver>
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_lastProcessedSessionResult;
    BOOL __queryActive;
    id <CHQueryDelegate> _delegate;
    CHRecognitionSession *_recognitionSession;
}

@property(nonatomic) BOOL _queryActive; // @synthesize _queryActive=__queryActive;
@property(readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
@property(nonatomic) id <CHQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (BOOL)wantsHighFrequencyNotifications;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)waitForPendingUpdates;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (id)init;
@property(readonly, retain, nonatomic) NSString *debugName;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
- (id)q_sessionResult;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

