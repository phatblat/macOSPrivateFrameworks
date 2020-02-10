//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PASLock;

@interface SGQuickResponsesStore : NSObject
{
    _PASLock *_readerWriter;
}

+ (id)keyWithLanguage:(id)arg1 andResponse:(id)arg2;
+ (id)instanceInMemory;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)destroyInstanceInMemory;
- (void)addWrittenToResponse:(id)arg1 language:(id)arg2 isMatch:(BOOL)arg3;
- (void)addSelectedToResponse:(id)arg1 language:(id)arg2;
- (void)addDisplayedToResponses:(id)arg1 language:(id)arg2;
- (id)recordsForResponses:(id)arg1 language:(id)arg2;
- (BOOL)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (BOOL)frailReadTransaction:(CDUnknownBlockType)arg1;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3 forTools:(BOOL)arg4;
- (id)initInDirectory:(id)arg1 inMemory:(BOOL)arg2 withMigration:(BOOL)arg3;
- (id)init;

@end
