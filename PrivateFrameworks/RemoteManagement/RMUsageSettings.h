//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, RMUser;

@interface RMUsageSettings : NSManagedObject
{
}

+ (id)fetchRequestMatchingUsageSettingsForLocalUserAndDeviceForOrganization:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL isEnabled; // @dynamic isEnabled;
@property(retain, nonatomic) RMUser *user; // @dynamic user;
@property(retain, nonatomic) NSSet *userDevicePairs; // @dynamic userDevicePairs;

@end

