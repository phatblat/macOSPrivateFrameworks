//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKDeviceToDeviceShareInvitationToken, HMBCloudZoneID, HMBShareInvitationContext, NSDate, NSURL;

@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding>
{
    HMBShareInvitationContext *_context;
    HMBCloudZoneID *_cloudZoneID;
    NSDate *_dateCreated;
    NSURL *_shareURL;
    CKDeviceToDeviceShareInvitationToken *_token;
}

+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;
@property(readonly, nonatomic) CKDeviceToDeviceShareInvitationToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) HMBCloudZoneID *cloudZoneID; // @synthesize cloudZoneID=_cloudZoneID;
@property(readonly, nonatomic) HMBShareInvitationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4 dateCreated:(id)arg5;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4;
- (id)initWithURL:(id)arg1;

@end
