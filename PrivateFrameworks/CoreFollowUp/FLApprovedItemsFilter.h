//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface FLApprovedItemsFilter : NSObject
{
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}

+ (id)sharedFilter;
- (void).cxx_destruct;
- (unsigned long long)approvalStatusForItem:(id)arg1;

@end

