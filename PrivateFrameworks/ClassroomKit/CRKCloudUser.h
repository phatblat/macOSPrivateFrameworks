//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface CRKCloudUser : NSObject <NSSecureCoding>
{
    BOOL _managedAppleID;
    BOOL _HSA2;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isHSA2) BOOL HSA2; // @synthesize HSA2=_HSA2;
@property(nonatomic, getter=isManagedAppleID) BOOL managedAppleID; // @synthesize managedAppleID=_managedAppleID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)representsSameUserAsUser:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToCloudUser:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isManagedAppleID:(BOOL)arg2 isHSA2:(BOOL)arg3;

@end
