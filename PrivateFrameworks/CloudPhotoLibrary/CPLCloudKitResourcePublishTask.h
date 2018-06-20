//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import "CPLEngineTransportResourcePublishTask.h"

@class CPLCloudKitScope, CPLResource, NSString;

@interface CPLCloudKitResourcePublishTask : CPLCloudKitTransportTask <CPLEngineTransportResourcePublishTask>
{
    CPLCloudKitScope *_scope;
    CPLResource *_resource;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)runOperations;
- (id)initWithController:(id)arg1 resource:(id)arg2 transportScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long minimumQualityOfService;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

