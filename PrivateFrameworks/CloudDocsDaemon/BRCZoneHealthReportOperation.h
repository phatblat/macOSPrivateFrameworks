//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import "BRCOperationSubclass.h"

@class BRCAccountSession, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass>
{
    BOOL shouldPerformAnotherBatch;
    BRCAccountSession *_session;
}

- (void).cxx_destruct;
- (void)main;
- (void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2;
- (BOOL)shouldPerformAnotherBatch;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

