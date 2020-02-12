//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NADiffableItemGroup.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface NASimpleDiffableItemGroup : NSObject <NADiffableItemGroup, NSCopying>
{
    NSString *_groupIdentifier;
    NSArray *_diffableItems;
}

@property(copy, nonatomic) NSArray *diffableItems; // @synthesize diffableItems=_diffableItems;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

