//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFMessageCounts : NSObject
{
    unsigned long long _totalCount;
    unsigned long long _unreadCount;
    unsigned long long _unseenCount;
    unsigned long long _deletedCount;
    unsigned long long _unreadAdjustedForDuplicates;
}

@property(readonly, nonatomic) unsigned long long unreadAdjustedForDuplicates; // @synthesize unreadAdjustedForDuplicates=_unreadAdjustedForDuplicates;
@property(readonly, nonatomic) unsigned long long deletedCount; // @synthesize deletedCount=_deletedCount;
@property(readonly, nonatomic) unsigned long long unseenCount; // @synthesize unseenCount=_unseenCount;
@property(readonly, nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
- (id)description;
- (id)initWithTotal:(unsigned long long)arg1 unread:(unsigned long long)arg2 unseen:(unsigned long long)arg3 deleted:(unsigned long long)arg4 unreadAdjustedForDuplicates:(unsigned long long)arg5;

@end

