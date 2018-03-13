//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitBaseSetupTask.h>

#import "CPLEngineTransportSetupTask.h"

@class NSString;

@interface CPLCloudKitSetupTask : CPLCloudKitBaseSetupTask <CPLEngineTransportSetupTask>
{
    CDUnknownBlockType _completionHandler;
    BOOL _createIfNecessary;
    NSString *_libraryZoneName;
}

+ (long long)zoneIndexFromZoneName:(id)arg1;
@property(copy, nonatomic) NSString *libraryZoneName; // @synthesize libraryZoneName=_libraryZoneName;
@property(nonatomic) BOOL createIfNecessary; // @synthesize createIfNecessary=_createIfNecessary;
- (void).cxx_destruct;
- (void)runOperations;
- (void)createRecordZoneWithID:(id)arg1;
- (void)fetchUserRecord;
- (id)initWithController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

