//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PencilKit/PKUndoCommand.h>

@class NSUUID, PKStrokeSelection;

@interface PKStrokeSelectionCommand : PKUndoCommand
{
    int _selectionCommandType;
    NSUUID *_toDrawingUUID;
    PKStrokeSelection *_strokeSelection;
    NSUUID *_fromDrawingUUID;
    struct CGAffineTransform _selectionTransform;
    struct CGAffineTransform _previousSelectionTransform;
}

+ (id)commandForDeselectingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform)arg3 previousSelectionTransform:(struct CGAffineTransform)arg4;
+ (id)commandForMovingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform)arg3 previousSelectionTransform:(struct CGAffineTransform)arg4 fromDrawingUUID:(id)arg5;
+ (id)commandForSelectingStrokes:(id)arg1 toDrawingUUID:(id)arg2 selectionTransform:(struct CGAffineTransform)arg3 previousSelectionTransform:(struct CGAffineTransform)arg4;
@property(readonly, nonatomic) NSUUID *fromDrawingUUID; // @synthesize fromDrawingUUID=_fromDrawingUUID;
@property(readonly, nonatomic) struct CGAffineTransform previousSelectionTransform; // @synthesize previousSelectionTransform=_previousSelectionTransform;
@property(readonly, nonatomic) struct CGAffineTransform selectionTransform; // @synthesize selectionTransform=_selectionTransform;
@property(readonly, nonatomic) int selectionCommandType; // @synthesize selectionCommandType=_selectionCommandType;
@property(readonly, nonatomic) PKStrokeSelection *strokeSelection; // @synthesize strokeSelection=_strokeSelection;
@property(readonly, nonatomic) NSUUID *toDrawingUUID; // @synthesize toDrawingUUID=_toDrawingUUID;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)arg1;
- (id)description;
- (void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)inverted;
- (id)initWithStrokes:(id)arg1 toDrawingUUID:(id)arg2 actionName:(id)arg3 commandSelectionType:(int)arg4 selectionTransform:(struct CGAffineTransform)arg5 previousSelectionTransform:(struct CGAffineTransform)arg6 fromDrawingUUID:(id)arg7;

@end

