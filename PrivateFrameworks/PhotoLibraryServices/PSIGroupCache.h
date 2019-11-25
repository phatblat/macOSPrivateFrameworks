//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface PSIGroupCache : NSObject
{
    NSMutableSet *_groups;
    id <PSIGroupCacheDelegate> _delegate;
    unsigned long long _numberOfGroupsChecked;
    unsigned long long _numberOfGroupsQueried;
}

@property(readonly) unsigned long long numberOfGroupsQueried; // @synthesize numberOfGroupsQueried=_numberOfGroupsQueried;
@property(readonly) unsigned long long numberOfGroupsChecked; // @synthesize numberOfGroupsChecked=_numberOfGroupsChecked;
- (void).cxx_destruct;
- (unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out char *)arg5;
- (id)initWithDelegate:(id)arg1;

@end

