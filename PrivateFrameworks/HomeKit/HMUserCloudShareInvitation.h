//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDeviceToDeviceShareInvitationToken, HMHome, HMUser, NSString, NSURL;

@interface HMUserCloudShareInvitation : NSObject
{
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_shareToken;
    NSString *_containerID;
    HMHome *_home;
    HMUser *_user;
    HMUser *_fromUser;
}

@property(readonly) HMUser *fromUser; // @synthesize fromUser=_fromUser;
@property(readonly) HMUser *user; // @synthesize user=_user;
@property(readonly) HMHome *home; // @synthesize home=_home;
@property(readonly) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly) CKDeviceToDeviceShareInvitationToken *shareToken; // @synthesize shareToken=_shareToken;
@property(readonly) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6;

@end

