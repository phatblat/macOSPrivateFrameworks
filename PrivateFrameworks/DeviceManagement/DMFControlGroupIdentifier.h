//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _groupID;
    NSUUID *_organizationUUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
@property(nonatomic) unsigned short groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSUUID *organizationUUID; // @synthesize organizationUUID=_organizationUUID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToGroupIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end
