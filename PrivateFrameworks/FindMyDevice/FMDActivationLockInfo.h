//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>
{
    BOOL _supportsDeviceAuth;
    BOOL _isActivationLocked;
    NSString *_title;
    NSString *_messageICloudAuth;
    NSString *_messageOSAuth;
    NSString *_maskedAppleID;
    NSString *_helpURL;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isActivationLocked; // @synthesize isActivationLocked=_isActivationLocked;
@property(nonatomic) BOOL supportsDeviceAuth; // @synthesize supportsDeviceAuth=_supportsDeviceAuth;
@property(retain, nonatomic) NSString *helpURL; // @synthesize helpURL=_helpURL;
@property(retain, nonatomic) NSString *maskedAppleID; // @synthesize maskedAppleID=_maskedAppleID;
@property(retain, nonatomic) NSString *messageOSAuth; // @synthesize messageOSAuth=_messageOSAuth;
@property(retain, nonatomic) NSString *messageICloudAuth; // @synthesize messageICloudAuth=_messageICloudAuth;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
