//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPContainerEdit.h"

@class NSArray, NSIndexSet, NSUUID;

@protocol MSPContainerEditAddition <MSPContainerEdit>
@property(readonly, nonatomic) NSIndexSet *indexesOfAddedObjects;
@property(readonly, nonatomic) NSArray *addedImmutableObjects;
- (NSUUID *)identifierForObjectAtopAddedImmutableObject:(id <MSPImmutableObject>)arg1;
@end
