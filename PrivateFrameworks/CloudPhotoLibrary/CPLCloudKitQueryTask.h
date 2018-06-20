//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import "CPLEngineTransportQueryTask.h"

@class CKQueryCursor, CPLCloudKitScope, NSString;

@interface CPLCloudKitQueryTask : CPLCloudKitTransportTask <CPLEngineTransportQueryTask>
{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    CKQueryCursor *_cursor;
    Class _queriedClass;
    CPLCloudKitScope *_scope;
    NSString *_scopeIdentifier;
}

@property(readonly, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(readonly, nonatomic) CPLCloudKitScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) Class queriedClass; // @synthesize queriedClass=_queriedClass;
@property(readonly, copy, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)runOperations;
- (void)sendProgressBatch:(id)arg1 updatedCursor:(id)arg2;
- (void)run;
- (id)initWithController:(id)arg1 cursor:(id)arg2 class:(Class)arg3 scope:(id)arg4 scopeIdentifier:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long minimumQualityOfService;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end
