//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessIntPredicate : RBSProcessPredicateImpl
{
    unsigned long long _identifier;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1;

@end
