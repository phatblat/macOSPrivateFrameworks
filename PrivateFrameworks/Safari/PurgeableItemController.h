//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PurgeableItemController : NSObject
{
    NSArray *_purgeableItems;
}

@property(retain, nonatomic) NSArray *purgeableItems; // @synthesize purgeableItems=_purgeableItems;
- (void).cxx_destruct;
- (BOOL)purgeItemsOfMinimalPurgeOrder:(unsigned long long)arg1 totalSizeOfItemsPurged:(unsigned long long *)arg2;
- (unsigned long long)sizeOfPurgeableItemsOfMinimalPurgeOrder:(unsigned long long)arg1;
- (id)initWithPurgeableItems:(id)arg1;

@end

