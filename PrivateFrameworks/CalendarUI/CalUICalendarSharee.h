//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CalUICalendarSharee : NSObject
{
    BOOL _existingSharee;
    BOOL _isICloudUser;
    BOOL _isOwner;
    int _accessLevel;
    int _inviteStatus;
    NSString *_href;
    NSString *_commonName;
    NSString *_commonNameOrAddress;
}

+ (id)ownerWithEmailAddress:(id)arg1;
+ (id)pseudoOwnerWithEmailAddress:(id)arg1;
+ (id)shareeWithEmailAddress:(id)arg1 existingSharee:(BOOL)arg2;
+ (id)shareeWithCUAddress:(id)arg1 displayName:(id)arg2;
+ (id)shareeWithEmailAddress:(id)arg1;
@property BOOL isOwner; // @synthesize isOwner=_isOwner;
@property BOOL isICloudUser; // @synthesize isICloudUser=_isICloudUser;
@property BOOL existingSharee; // @synthesize existingSharee=_existingSharee;
@property int inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property int accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly) NSString *commonNameOrAddress; // @synthesize commonNameOrAddress=_commonNameOrAddress;
@property(retain) NSString *commonName; // @synthesize commonName=_commonName;
@property(retain) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setShareeWritePrivileges:(BOOL)arg1;
- (BOOL)isViewOnly;
- (id)generateUser;
- (id)imageName;
- (id)emailString;
- (id)description;
- (void)updateCommonNameUsingABIfNeeded:(id)arg1;
- (id)initWithCalManagedSharee:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 existingSharee:(BOOL)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2 existingSharee:(BOOL)arg3;
- (id)initAsExistingSharee:(BOOL)arg1;

@end

