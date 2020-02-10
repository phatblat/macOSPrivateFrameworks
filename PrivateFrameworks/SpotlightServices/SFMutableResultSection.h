//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFResultSection.h"

@class NSMutableOrderedSet, NSNumber, NSString;

@interface SFMutableResultSection : SFResultSection
{
    BOOL _doNotFold;
    BOOL _pinToTop;
    unsigned int _domain;
    NSString *_groupName;
    NSNumber *_groupId;
    NSMutableOrderedSet *_resultSet;
}

+ (BOOL)supportsSecureCoding;
@property BOOL pinToTop; // @synthesize pinToTop=_pinToTop;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property BOOL doNotFold; // @synthesize doNotFold=_doNotFold;
@property(retain, nonatomic) NSMutableOrderedSet *resultSet; // @synthesize resultSet=_resultSet;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)replaceResultsAtIndex:(unsigned long long)arg1 withResults:(id)arg2;
- (void)removeResultsInArray:(id)arg1;
- (void)removeResultsInRange:(struct _NSRange)arg1;
- (void)removeResults:(id)arg1;
- (void)removeResultsAtIndex:(unsigned long long)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfResult:(id)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addResults:(id)arg1;
- (void)addResultsFromArray:(id)arg1;
- (void)clearResults;
- (id)results;
- (void)setResults:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableDeepCopy;
- (id)description;
- (id)initWithPrototype:(id)arg1;
- (id)initWithSection:(id)arg1;

@end
