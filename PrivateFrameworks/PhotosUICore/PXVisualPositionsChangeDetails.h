//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface PXVisualPositionsChangeDetails : NSObject
{
    long long _countBeforeChanges;
    long long _anchorIndexBeforeChanges;
    NSIndexSet *_headerIndexesBeforeChanges;
    long long _countAfterChanges;
    long long _anchorIndexAfterChanges;
    NSIndexSet *_headerIndexesAfterChanges;
    long long _anchorBodyIndexBeforeChanges;
    long long _anchorBodyIndexAfterChanges;
}

+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 reloadAllIncludingAnchor:(BOOL)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorRemoved:(long long)arg5 indexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorRemoved:(long long)arg4 indexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 headerIndexesBeforeChanges:(id)arg4 countAfterChanges:(long long)arg5 anchorIndexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 anchorReload:(long long)arg6;
@property(readonly, nonatomic) long long anchorBodyIndexAfterChanges; // @synthesize anchorBodyIndexAfterChanges=_anchorBodyIndexAfterChanges;
@property(readonly, nonatomic) long long anchorBodyIndexBeforeChanges; // @synthesize anchorBodyIndexBeforeChanges=_anchorBodyIndexBeforeChanges;
@property(readonly, nonatomic) NSIndexSet *headerIndexesAfterChanges; // @synthesize headerIndexesAfterChanges=_headerIndexesAfterChanges;
@property(readonly, nonatomic) long long anchorIndexAfterChanges; // @synthesize anchorIndexAfterChanges=_anchorIndexAfterChanges;
@property(readonly, nonatomic) long long countAfterChanges; // @synthesize countAfterChanges=_countAfterChanges;
@property(readonly, nonatomic) NSIndexSet *headerIndexesBeforeChanges; // @synthesize headerIndexesBeforeChanges=_headerIndexesBeforeChanges;
@property(readonly, nonatomic) long long anchorIndexBeforeChanges; // @synthesize anchorIndexBeforeChanges=_anchorIndexBeforeChanges;
@property(readonly, nonatomic) long long countBeforeChanges; // @synthesize countBeforeChanges=_countBeforeChanges;
- (void).cxx_destruct;
- (id)arrayChangeDetailsWithItemsChanged:(BOOL)arg1;
- (CDStruct_7457641b)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;
- (CDStruct_7457641b)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;
- (CDStruct_7457641b)visualPositionAfterRevertingChangesFromIndex:(long long)arg1;
- (CDStruct_7457641b)visualPositionAfterApplyingChangesToIndex:(long long)arg1;
- (id)init;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;

@end
