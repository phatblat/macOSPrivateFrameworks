//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface PGDeduper : NSObject
{
    NSSet *_identifiersOfRequiredItems;
}

@property(copy, nonatomic) NSSet *identifiersOfRequiredItems; // @synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems;
- (void).cxx_destruct;
- (id)requiredItemsInItems:(id)arg1;
- (BOOL)itemIsRequired:(id)arg1;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
