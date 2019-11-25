//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _NSOrderedRangeIndexer : NSObject
{
    struct shared_ptr<_NSOrderedRangeIndexerImpl> _orderedRangeIndexerImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange containingRange;
@property(readonly, nonatomic) long long numberOfRanges;
- (struct _NSRange)rangeAtIndex:(long long)arg1;
- (long long)indexOfRangeContainingLocation:(long long)arg1;
- (struct _NSRange)rangeContainingLocation:(long long)arg1;
- (void)appendRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSArray *orderedRanges;
- (id)description;
- (id)init;

@end

