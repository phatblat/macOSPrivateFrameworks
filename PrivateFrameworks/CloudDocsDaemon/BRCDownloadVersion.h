//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCClientZone, BRCProgress, CKRecord, CKRecordID, GSPermanentStorage, NSError, NSNumber;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersion : BRCDownload
{
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    BOOL _sharedZone;
    BOOL _isLoser;
    GSPermanentStorage *_storage;
    NSError *_gsError;
    NSNumber *_docID;
}

@property(readonly, nonatomic) NSNumber *docID; // @synthesize docID=_docID;
@property(readonly, nonatomic) NSError *gsError; // @synthesize gsError=_gsError;
@property(readonly, nonatomic) GSPermanentStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) BOOL isLoser; // @synthesize isLoser=_isLoser;
- (void)setSecondaryRecord:(id)arg1;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void).cxx_destruct;
- (id)_stageWithSession:(id)arg1 creationInfo:(id *)arg2 error:(id *)arg3;
- (id)_stageContentWithSession:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(BOOL)arg4;
@property(retain, nonatomic) BRCProgress *progress;
- (int)kind;

@end
