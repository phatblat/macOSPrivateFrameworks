//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDatabase, NSObject<OS_dispatch_queue>;

@interface VCCKVoiceShortcutFetcher : NSObject
{
    BOOL _completed;
    NSObject<OS_dispatch_queue> *_queue;
    CKDatabase *_database;
    long long _qualityOfService;
    CDUnknownBlockType _recordHandler;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType recordHandler; // @synthesize recordHandler=_recordHandler;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchRecordsFromZone:(id)arg1;
- (void)fetchRecordZones;
- (void)start;
- (void)addOperation:(id)arg1;
- (void)finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)initWithRecordHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
