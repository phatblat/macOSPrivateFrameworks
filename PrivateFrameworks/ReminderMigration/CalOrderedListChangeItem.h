//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMListChangeItem;

__attribute__((visibility("hidden")))
@interface CalOrderedListChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
    long long _order;
}

@property(nonatomic) long long order; // @synthesize order=_order;
@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
- (void).cxx_destruct;

@end

