//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation
{
    CKRecord *_userRecord;
}

@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
- (void).cxx_destruct;
- (id)analyticsPayload;
- (void)main;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;

@end

