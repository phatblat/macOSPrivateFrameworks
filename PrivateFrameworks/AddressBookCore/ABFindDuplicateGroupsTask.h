//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNTask.h"

@class NSProgress;

@interface ABFindDuplicateGroupsTask : CNTask
{
    id <ABFindDuplicateGroupsTaskStrategyImpl> _discoveryStrategyImpl;
    NSProgress *_progress;
}

+ (id)makeImplForDiscoveryStrategy:(unsigned long long)arg1 addressBook:(id)arg2;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly) id <ABFindDuplicateGroupsTaskStrategyImpl> discoveryStrategyImpl; // @synthesize discoveryStrategyImpl=_discoveryStrategyImpl;
- (void).cxx_destruct;
- (id)partitionCollectionsByGroupName:(id)arg1;
- (id)partitionGroupsByCollection:(id)arg1;
- (id)run:(id *)arg1;
- (id)description;
- (id)initWithDiscoveryStrategyImpl:(id)arg1;
- (id)initWithAddressBook:(id)arg1 discoveryStrategy:(unsigned long long)arg2;
- (id)initWithGroups:(id)arg1;
- (id)init;

@end
