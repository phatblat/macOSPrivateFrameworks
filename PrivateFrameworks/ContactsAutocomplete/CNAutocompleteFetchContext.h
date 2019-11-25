//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSString;

@interface CNAutocompleteFetchContext : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _predictsBasedOnOutgoingInteraction;
    NSString *_sendingAddress;
    NSString *_sendingAddressAccountIdentifier;
    NSString *_domainIdentifier;
    NSArray *_relatedContacts;
    NSArray *_otherAddressesAlreadyChosen;
    NSDate *_date;
    NSString *_locationUUID;
    NSString *_title;
    NSArray *_bundleIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property BOOL predictsBasedOnOutgoingInteraction; // @synthesize predictsBasedOnOutgoingInteraction=_predictsBasedOnOutgoingInteraction;
@property(copy) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSArray *otherAddressesAlreadyChosen; // @synthesize otherAddressesAlreadyChosen=_otherAddressesAlreadyChosen;
@property(copy) NSArray *relatedContacts; // @synthesize relatedContacts=_relatedContacts;
@property(copy) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(copy) NSString *sendingAddressAccountIdentifier; // @synthesize sendingAddressAccountIdentifier=_sendingAddressAccountIdentifier;
@property(copy) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
- (void).cxx_destruct;
- (BOOL)isValid:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

