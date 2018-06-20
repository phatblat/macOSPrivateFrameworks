//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

#import "CXVideoAspectRatioDescriptor.h"

@class CXHandle, NSDate, NSString, NSUUID;

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor>
{
    BOOL _video;
    BOOL _relay;
    BOOL _upgrade;
    BOOL _retry;
    BOOL _emergency;
    BOOL _voicemail;
    BOOL _shouldSuppressInCallUI;
    CXHandle *_handle;
    NSString *_contactIdentifier;
    NSDate *_dateStarted;
    long long _ttyType;
    NSUUID *_localSenderIdentityUUID;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (BOOL)supportsSecureCoding;
+ (double)timeout;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isVoicemail) BOOL voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isEmergency) BOOL emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isRetry) BOOL retry; // @synthesize retry=_retry;
@property(nonatomic, getter=isUpgrade) BOOL upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic, getter=isRelay) BOOL relay; // @synthesize relay=_relay;
@property(copy, nonatomic) NSDate *dateStarted; // @synthesize dateStarted=_dateStarted;
@property(nonatomic, getter=isVideo) BOOL video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) CXHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (void)fulfillWithDateStarted:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 handle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

