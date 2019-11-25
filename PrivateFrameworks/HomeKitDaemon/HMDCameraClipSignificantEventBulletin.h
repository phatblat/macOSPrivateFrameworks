//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessory, HMDCameraProfile, HMDHome, HMDService, NSArray, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface HMDCameraClipSignificantEventBulletin : NSObject
{
    BOOL _shouldShowProvideFeedbackButton;
    NSString *_title;
    NSString *_body;
    NSString *_threadIdentifier;
    NSString *_requestIdentifier;
    NSURL *_previewImageFilePathURL;
    NSDate *_dateOfOccurrence;
    NSArray *_notificationUUIDs;
    HMDCameraProfile *_camera;
    HMDHome *_home;
    HMDService *_service;
    HMDAccessory *_accessory;
    NSUUID *_clipUUID;
}

+ (id)localizedMessageForSignificantEvent:(unsigned long long)arg1 cameraName:(id)arg2;
@property(readonly, copy) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
@property(readonly) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMDService *service; // @synthesize service=_service;
@property(readonly) HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDCameraProfile *camera; // @synthesize camera=_camera;
@property(readonly) BOOL shouldShowProvideFeedbackButton; // @synthesize shouldShowProvideFeedbackButton=_shouldShowProvideFeedbackButton;
@property(readonly, copy) NSArray *notificationUUIDs; // @synthesize notificationUUIDs=_notificationUUIDs;
@property(readonly, copy) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly) NSURL *previewImageFilePathURL; // @synthesize previewImageFilePathURL=_previewImageFilePathURL;
@property(readonly, copy) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy) NSString *body; // @synthesize body=_body;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *userInfo;
- (id)initWithNotificationUUIDs:(id)arg1 previewImageFilePathURL:(id)arg2 significantEvent:(unsigned long long)arg3 dateOfOccurrence:(id)arg4 camera:(id)arg5 home:(id)arg6 accessory:(id)arg7 recordingService:(id)arg8 clipUUID:(id)arg9 shouldShowProvideFeedbackButton:(BOOL)arg10;

@end

