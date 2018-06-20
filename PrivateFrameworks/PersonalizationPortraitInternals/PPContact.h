//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, NSString, SGContact;

@interface PPContact : NSObject
{
    NSString *_cachedFullName;
    BOOL _isFavorite;
    NSString *_identifier;
    CNContact *_contact;
    SGContact *_sgContact;
    unsigned long long _source;
    double _score;
}

@property(nonatomic) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) SGContact *sgContact; // @synthesize sgContact=_sgContact;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)nonGregorianBirthday;
- (id)birthday;
- (id)organizationName;
- (id)familyName;
- (id)givenName;
- (id)socialProfiles;
- (id)postalAddresses;
- (id)emailAddresses;
- (id)phoneNumbers;
- (id)nickname;
- (id)fullName;
- (id)description;

@end

