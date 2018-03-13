//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : NSObject
{
    WDDocument *mDocument;
    int mListId;
    int mListDefinitionId;
    NSMutableArray *mLevelOverrides;
}

@property(readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
@property(readonly, nonatomic) int listId; // @synthesize listId=mListId;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(int)arg2 listDefinitionId:(int)arg3;
- (BOOL)isAnyListLevelOverridden;
- (id)levelOverrides;
- (void)removeLevelOverride:(id)arg1;
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrideAt:(unsigned long long)arg1;
- (unsigned long long)levelOverrideCount;
- (void)dealloc;

@end

