//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDPersonInvalidMergeCandidatePersonModel.h>

@class NSString;

@interface RDPersonInvalidMergeCandidatePerson : RDPersonInvalidMergeCandidatePersonModel
{
}

+ (id)_candidatePersonIdsForPersonId:(long long)arg1 inDatabase:(id)arg2;
+ (id)filterForInvalidMergeCandidatesForPersonId:(long long)arg1 inDatabase:(id)arg2;
+ (BOOL)isInvalidCandidatePersonId:(long long)arg1 forPersonId:(long long)arg2 inDatabase:(id)arg3;
+ (void)deleteInvalidCandidatePersonsForPersonId:(long long)arg1 inDatabase:(id)arg2;
+ (void)removeInvalidCandidatePersons:(id)arg1 fromPersonId:(long long)arg2 inDatabase:(id)arg3;
+ (void)addInvalidCandidatePersons:(id)arg1 toPersonId:(long long)arg2 inDatabase:(id)arg3;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

