//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface _MSCountableMatchesContext : NSObject
{
    NSMutableDictionary *_contactsCount;
    long long _maxCount;
    NSMutableSet *_highestMatches;
}

@property(readonly, nonatomic) NSMutableSet *highestMatches; // @synthesize highestMatches=_highestMatches;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (void)countInstances:(id)arg1 usingPredicate:(CDUnknownBlockType)arg2;
- (id)init;

@end

