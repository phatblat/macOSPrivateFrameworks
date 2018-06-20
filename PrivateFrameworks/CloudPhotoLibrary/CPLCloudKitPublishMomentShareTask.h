//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import "CPLEngineTransportPublishMomentShareTask.h"

@class CPLMomentShare, NSData, NSDate, NSString, NSURL;

@interface CPLCloudKitPublishMomentShareTask : CPLCloudKitTransportTask <CPLEngineTransportPublishMomentShareTask>
{
    CPLMomentShare *_momentShare;
    NSData *_momentShareTransportScope;
    CDUnknownBlockType _completionHandler;
    NSDate *_transportScope;
    NSURL *_tempCKAssetURL;
}

@property(copy, nonatomic) NSURL *tempCKAssetURL; // @synthesize tempCKAssetURL=_tempCKAssetURL;
@property(readonly, nonatomic) NSDate *transportScope; // @synthesize transportScope=_transportScope;
- (void).cxx_destruct;
- (void)_fetchShareParticipantsForParticipants:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchExpiryDateInZone:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createNewShareInZone:(id)arg1 withShareParticipants:(id)arg2 mode:(short)arg3;
- (void)runOperations;
- (id)initWithController:(id)arg1 momentShare:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long minimumQualityOfService;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

