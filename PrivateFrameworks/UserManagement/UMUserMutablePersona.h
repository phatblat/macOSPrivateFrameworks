//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserManagement/UMUserPersona.h>

@class NSString;

@interface UMUserMutablePersona : UMUserPersona
{
}

- (BOOL)commitChangesWithError:(id *)arg1;
- (BOOL)commitChanges;

// Remaining properties
@property(nonatomic) unsigned int gid; // @dynamic gid;
@property(nonatomic) BOOL isDefaultPersona; // @dynamic isDefaultPersona;
@property(nonatomic) BOOL isDisabled; // @dynamic isDisabled;
@property(nonatomic) BOOL isEnterprisePersona; // @dynamic isEnterprisePersona;
@property(nonatomic) BOOL isPersonalPersona; // @dynamic isPersonalPersona;
@property(nonatomic) BOOL isSystemPersona; // @dynamic isSystemPersona;
@property(nonatomic) unsigned int uid; // @dynamic uid;
@property(copy, nonatomic) NSString *userPersonaNickName; // @dynamic userPersonaNickName;
@property(nonatomic) unsigned long long userPersonaType; // @dynamic userPersonaType;
@property(copy, nonatomic) NSString *userPersonaUniqueString; // @dynamic userPersonaUniqueString;

@end

