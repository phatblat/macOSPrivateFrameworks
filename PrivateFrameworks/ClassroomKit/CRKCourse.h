//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CRKUser, DMFControlGroupIdentifier, NSDate, NSDictionary, NSSet, NSString;

@interface CRKCourse : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _requestingUnenroll;
    BOOL _studentCredentialsAreValid;
    BOOL _mustRequestUnenroll;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    CRKUser *_courseUser;
    NSDictionary *_instructorsByIdentifier;
    unsigned long long _type;
    NSDate *_automaticRemovalDate;
    NSSet *_trustedCertificatePersistentIds;
    NSSet *_validTrustedCertificatePersistentIds;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingExpired;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)new;
@property(nonatomic) BOOL mustRequestUnenroll; // @synthesize mustRequestUnenroll=_mustRequestUnenroll;
@property(retain, nonatomic) NSSet *validTrustedCertificatePersistentIds; // @synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds;
@property(retain, nonatomic) NSSet *trustedCertificatePersistentIds; // @synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds;
@property(nonatomic) BOOL studentCredentialsAreValid; // @synthesize studentCredentialsAreValid=_studentCredentialsAreValid;
@property(retain, nonatomic) NSDate *automaticRemovalDate; // @synthesize automaticRemovalDate=_automaticRemovalDate;
@property(nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll; // @synthesize requestingUnenroll=_requestingUnenroll;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *instructorsByIdentifier; // @synthesize instructorsByIdentifier=_instructorsByIdentifier;
@property(retain, nonatomic) CRKUser *courseUser; // @synthesize courseUser=_courseUser;
@property(nonatomic) unsigned long long courseColorType; // @synthesize courseColorType=_courseColorType;
@property(nonatomic) unsigned long long courseMascotType; // @synthesize courseMascotType=_courseMascotType;
@property(copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDeeplyEqual:(id)arg1;
- (BOOL)isEqualToCourse:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (void)setManaged:(BOOL)arg1;
@property(readonly, nonatomic, getter=isManaged) BOOL managed;
- (id)initWithIdentifier:(id)arg1 managed:(BOOL)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

