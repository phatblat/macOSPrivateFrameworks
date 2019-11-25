//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreThemeDocument, NSConditionLock, NSMutableArray, NSObject<OS_dispatch_group>, TDLogger;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    BOOL shouldCompressCSIDataFlag;
    BOOL noMoreCSIDataInfo;
    BOOL noMoreRenditions;
    NSObject<OS_dispatch_group> *_group;
    TDLogger *_logger;
}

@property(retain) TDLogger *logger; // @synthesize logger=_logger;
- (id)nextCSIDataInfoFromQueue;
- (void)enqueueRenditionSpec:(id)arg1;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)detachDistillationThread;
- (void)waitUntilFinished;
- (void)_distill:(id)arg1;
- (id)_nextObjectFromInQueue;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(BOOL)arg2;

@end

