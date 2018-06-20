//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSObject.h"

@class LiKeyPath, LiTable, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@protocol LiModelCore <NSObject, NSCopying, NSMutableCopying>
- (void)saveWithModelId:(unsigned long long)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void (^)(void))prepareForTransactionContextSave;
- (void)waitForPersist;
- (void)completePersistWithProperties:(NSDictionary *)arg1;
- (NSDictionary *)preparePropertiesForPersist;
- (BOOL)makeReadOnlyCheck;
- (void)detach;
- (NSArray *)debugInflightProperties;
- (NSArray *)dirtyPropertiesKeyIndexes;
- (void)setDirtyProperties:(NSMutableDictionary *)arg1;
- (NSDictionary *)dirtyProperties;
- (void)setLocalProperty:(id)arg1 forKeyPath:(LiKeyPath *)arg2;
- (BOOL)setProperty:(id)arg1 forKeyPath:(LiKeyPath *)arg2 options:(unsigned int)arg3 propertyChanged:(char *)arg4;
- (BOOL)close;
- (void)openWithReason:(unsigned short)arg1;
- (void)open;
- (void)setSearchTokensToInvalidateOnSave:(unsigned long long)arg1;
- (unsigned long long)searchTokensToInvalidateOnSave;
- (void)setIsUpdating:(BOOL)arg1;
- (unsigned long long)openCount;
- (unsigned short)modelChangeReason;
- (void)setIsInTransaction:(BOOL)arg1;
- (BOOL)isInTransaction;
- (BOOL)isDirty;
- (BOOL)isDetached;
- (BOOL)isUpdating;
- (void)setLocalProperty:(id)arg1 forPropertyIndex:(NSNumber *)arg2;
- (NSMutableDictionary *)localProperties;
- (NSArray *)keyPathsMissingFromLocalProperties:(NSArray *)arg1 uuid:(NSString *)arg2;
- (BOOL)localPropertiesContainKeyPaths:(NSArray *)arg1 uuid:(NSString *)arg2;
- (void *)sortPropertyForPropertyIndex:(struct __CFNumber *)arg1;
- (id)localRawPropertyForKeyPath:(LiKeyPath *)arg1;
- (id)propertyForKeyPath:(LiKeyPath *)arg1;
- (id)copyCoreWithCapacity:(unsigned long long)arg1 modelId:(unsigned long long)arg2;
- (LiTable *)table;
- (BOOL)hasLocalProperties;
- (BOOL)isReadOnly;
@end

