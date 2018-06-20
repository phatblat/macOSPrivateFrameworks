//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICTable.h"

@class NSObject<ICTableDelegate>;

@interface ICTable (UI)
- (id)textStorageForColumn:(id)arg1;
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;

// Remaining properties
@property(nonatomic) __weak NSObject<ICTableDelegate> *delegate;
@end

