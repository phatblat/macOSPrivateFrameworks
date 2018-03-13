//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDVersionsQuery.h>

@class RDMemory;

@interface RDMemoryExtendedCuratedVersionsQuery : RDVersionsQuery
{
    long long _memoryTableId;
    long long _memoryModelId;
    RDMemory *_memory;
}

+ (id)extendedCuratedVersionQueryForMemory:(id)arg1 options:(id)arg2;
+ (id)extendedCuratedVersionQueryForMemory:(id)arg1;
@property(retain, nonatomic) RDMemory *memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (unsigned long long)changedByModelChangeGroups:(id)arg1;
- (unsigned long long)changedByNotification:(id)arg1 forKeyPaths:(id)arg2 withChangeType:(unsigned char)arg3;
- (void)resetLoadProperties;
- (void)internalInitWithMemory:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilter:(id)arg1 database:(id)arg2 options:(id)arg3;
- (id)initWithMemory:(id)arg1 options:(id)arg2;
- (id)init;

@end

