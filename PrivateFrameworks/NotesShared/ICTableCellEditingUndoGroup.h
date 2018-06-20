//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/TTMergeableStringUndoGroup.h>

@class ICTableAttachmentSelection, ICTableUndoTarget, NSUUID;

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup
{
    NSUUID *_columnID;
    NSUUID *_rowID;
    ICTableAttachmentSelection *_tableSelection;
    ICTableUndoTarget *_undoTarget;
}

@property(readonly, nonatomic) ICTableUndoTarget *undoTarget; // @synthesize undoTarget=_undoTarget;
@property(readonly, nonatomic) ICTableAttachmentSelection *tableSelection; // @synthesize tableSelection=_tableSelection;
@property(readonly, nonatomic) NSUUID *rowID; // @synthesize rowID=_rowID;
@property(readonly, nonatomic) NSUUID *columnID; // @synthesize columnID=_columnID;
- (void).cxx_destruct;
- (id)initWithColumn:(id)arg1 row:(id)arg2 selection:(id)arg3 undoTarget:(id)arg4;
- (id)init;

@end

