//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

#import "RMReconcilableObject.h"

@class NSData, NSNumber, NSSet, NSString, NSUUID, RMCloudOrganization;

@interface RMCloudUser : RMUniquedManagedObject <RMReconcilableObject>
{
}

+ (BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id *)arg3;
+ (id)fetchRequest;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(nonatomic) BOOL isMe; // @dynamic isMe;
@property(nonatomic) BOOL isOrganizer; // @dynamic isOrganizer;
@property(copy, nonatomic) NSString *memberType; // @dynamic memberType;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) RMCloudOrganization *organization; // @dynamic organization;
@property(nonatomic) short role; // @dynamic role;
@property(copy, nonatomic) NSUUID *sortKey; // @dynamic sortKey;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(retain, nonatomic) NSSet *userDevicePairs; // @dynamic userDevicePairs;

@end

