//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand
{
    NSArray *_strokes;
    struct CGAffineTransform _strokeTransform;
}

+ (id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransform:(struct CGAffineTransform)arg3;
@property(readonly, nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (id)description;
- (void)applyToDrawing:(id)arg1;
- (id)invertedInDrawing:(id)arg1;
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(struct CGAffineTransform)arg4;

@end
