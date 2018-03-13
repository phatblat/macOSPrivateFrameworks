//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSActivityStream.h"

#import "OSActivityStreamDelegate.h"
#import "OSLogPersistenceDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, OSLogPersistence;

__attribute__((visibility("hidden")))
@interface CKLTailLog : OSActivityStream <OSLogPersistenceDelegate, OSActivityStreamDelegate>
{
    BOOL _stillReadingFromArchive;
    BOOL _continueToReturnResults;
    OSLogPersistence *_logPersistence;
    OSActivityStream *_activityStream;
    NSMutableArray *_results;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL continueToReturnResults; // @synthesize continueToReturnResults=_continueToReturnResults;
@property(nonatomic) BOOL stillReadingFromArchive; // @synthesize stillReadingFromArchive=_stillReadingFromArchive;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) OSActivityStream *activityStream; // @synthesize activityStream=_activityStream;
@property(retain, nonatomic) OSLogPersistence *logPersistence; // @synthesize logPersistence=_logPersistence;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)startFromStartDate:(id)arg1;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)streamDidStop:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (BOOL)activityStream:(id)arg1 results:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

