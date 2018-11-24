//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class CXHandle, NSDate, NSSet, NSString, NSUUID;

@interface CXJoinCallAction : CXCallAction
{
    BOOL _videoEnabled;
    BOOL _uplinkMuted;
    BOOL _shouldSuppressInCallUI;
    BOOL _wantsStagingArea;
    BOOL _upgrade;
    NSUUID *_groupUUID;
    NSSet *_remoteMembers;
    CXHandle *_callerID;
    NSUUID *_messagesGroupUUID;
    NSString *_messagesGroupName;
    NSDate *_dateStarted;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *dateStarted; // @synthesize dateStarted=_dateStarted;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(copy, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(nonatomic, getter=isUpgrade) BOOL upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic) BOOL wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic) BOOL shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isUplinkMuted) BOOL uplinkMuted; // @synthesize uplinkMuted=_uplinkMuted;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(copy, nonatomic) CXHandle *callerID; // @synthesize callerID=_callerID;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(copy, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (void)fulfillWithDateStarted:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 groupUUID:(id)arg2;

@end

