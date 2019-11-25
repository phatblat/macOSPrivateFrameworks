//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRDataType.h"

@class CRTTCompatibleDocument, NSHashTable, NSMutableAttributedString, NSObject<TTMergeableStringDelegate>, NSString, NSUUID, TTVectorMultiTimestamp;

@interface TTMergeableString : NSObject <CRDataType>
{
    vector_c5c053b6 _startNodes;
    vector_c5c053b6 _endNodes;
    vector_c5c053b6 _orderedSubstrings;
    unsigned int _unserializedClock;
    unsigned long long _editCount;
    BOOL _cacheInvalid;
    CDUnknownBlockType _updateRangeBlock;
    BOOL _hasLocalChanges;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSObject<TTMergeableStringDelegate> *_delegate;
    NSHashTable *_objectsNeedingUpdatedRanges;
    NSMutableAttributedString *_attributedString;
    unsigned long long _replicaTextClock;
    unsigned long long _replicaStyleClock;
}

+ (id)unserialisedReplicaID;
@property(readonly, nonatomic) unsigned long long replicaStyleClock; // @synthesize replicaStyleClock=_replicaStyleClock;
@property(readonly, nonatomic) unsigned long long replicaTextClock; // @synthesize replicaTextClock=_replicaTextClock;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // @synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges;
@property(nonatomic) __weak NSObject<TTMergeableStringDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dotDescription:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)graphIsEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)sortSplitNodes;
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(BOOL)arg2;
- (unsigned long long)mergeWithString:(id)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)checkTimestampLogStyleErrors:(BOOL)arg1;
- (BOOL)check:(id *)arg1;
- (void)updateClock;
- (BOOL)canMergeString:(id)arg1;
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(BOOL)arg1;
- (void)generateIdsForLocalChanges;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)coalesce;
- (void)updateSubstringIndexes;
- (void)updateAttributedStringAfterMerge;
- (void)invalidateCache;
- (void)updateCache;
- (vector_c5c053b6 *)orderedSubstrings;
- (struct TopoSubstring *)splitTopoSubstring:(struct TopoSubstring *)arg1 atIndex:(unsigned int)arg2;
- (BOOL)selection:(id)arg1 wasModifiedAfter:(id)arg2;
- (BOOL)textEitherSideOfSelectionAnchor:(struct TopoID)arg1 wasModifiedAfter:(id)arg2;
- (void)enumerateRangesModifiedAfter:(id)arg1 includingAttributes:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (long long)substring:(struct TopoSubstring *)arg1 modifiedAfter:(id)arg2 includeAttributes:(BOOL)arg3;
- (long long)substring:(struct TopoSubstring *)arg1 modifiedAfter:(id)arg2;
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID)arg1;
- (void)getCharacterRanges:(vector_7053a16b *)arg1 forSubstrings:(vector_c5c053b6 *)arg2;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (struct TopoSubstring *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 inOrderedSubstrings:(vector_c5c053b6 *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (void)updateTimestampsInRange:(struct _NSRange)arg1;
- (vector_c5c053b6 *)endNodes;
- (vector_c5c053b6 *)startNodes;
- (BOOL)isFragment;
- (void)_testSetTextTimestamp:(unsigned long long)arg1;
- (void)resetLocalReplicaClocksToTimestampValues;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;
- (id)characterRangesForSelection:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)length;
- (id)string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithReplicaID:(id)arg1 asFragment:(BOOL)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)init;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)serialize;
- (void)saveSubstrings:(vector_c5c053b6 *)arg1 archiveSet:(unordered_set_0f32d0a8 *)arg2 linkSet:(unordered_set_0f32d0a8 *)arg3 archivedString:(id *)arg4 toArchive:(struct String *)arg5;
- (void)saveToArchive:(struct String *)arg1;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3 timestamp:(id)arg4;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)mergeWith:(id)arg1;
@property(retain, nonatomic) CRTTCompatibleDocument *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

