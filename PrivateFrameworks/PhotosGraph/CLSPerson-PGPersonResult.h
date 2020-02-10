//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSPerson.h"

#import "PGGraphIngestPerson.h"
#import "PGPersonResult.h"

@class NSDate, NSDictionary, NSString;

@interface CLSPerson (PGPersonResult) <PGPersonResult, PGGraphIngestPerson>
+ (unsigned long long)type;
@property(readonly, nonatomic) BOOL isInferredChild;
@property(readonly, nonatomic) BOOL isVerified;
- (long long)compareToPerson:(id)arg1;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property(readonly, nonatomic) NSString *contactID;
@property(readonly, nonatomic) NSString *UUID;

// Remaining properties
@property(readonly, nonatomic) unsigned long long ageCategory;
@property(readonly, nonatomic) NSDate *anniversaryDate;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) unsigned long long gender;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFavorite;
@property(readonly, nonatomic) BOOL isMe;
@property(readonly, nonatomic) BOOL isUserCreated;
@property(readonly, nonatomic) NSDate *potentialBirthdayDate;
@property(readonly, nonatomic) unsigned long long relationship;
@property(readonly) Class superclass;
@end
