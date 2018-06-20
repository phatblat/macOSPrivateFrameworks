//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import "BRCOperationSubclass.h"

@class CKRecordID, NSError, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    BOOL _iWorkShareable;
    BOOL _isChildOfShare;
}

- (void).cxx_destruct;
- (void)main;
- (void)_fetchBaseTokenWithCompletion:(CDUnknownBlockType)arg1;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
