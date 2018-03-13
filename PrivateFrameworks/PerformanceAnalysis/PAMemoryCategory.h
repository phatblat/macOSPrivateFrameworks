//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, PAProcess;

@interface PAMemoryCategory : NSObject <NSCoding>
{
    NSString *name;
    PAProcess *process;
    NSMutableSet *_memObjects;
    NSMutableDictionary *_subCategories;
    long long totalDirtySize;
    long long totalSwappedSize;
    long long totalCleanSize;
    long long totalReclaimableSize;
}

@property(readonly) long long totalReclaimableSize; // @synthesize totalReclaimableSize;
@property(readonly) long long totalCleanSize; // @synthesize totalCleanSize;
@property(readonly) long long totalSwappedSize; // @synthesize totalSwappedSize;
@property(readonly) long long totalDirtySize; // @synthesize totalDirtySize;
@property(readonly) NSDictionary *subCategories; // @synthesize subCategories=_subCategories;
@property(readonly) NSSet *memObjects; // @synthesize memObjects=_memObjects;
@property(readonly) PAProcess *process; // @synthesize process;
@property(readonly) NSString *name; // @synthesize name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_sortedNonZeroSubCategoriesForFlavor:(int)arg1;
- (id)detailStringForFlavor:(int)arg1 andCallOutSwapped:(BOOL)arg2 andShowCategories:(BOOL)arg3 andShowRegions:(BOOL)arg4;
- (void)addMemoryObject:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 forProcess:(id)arg2;

@end

