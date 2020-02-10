//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/RKRetouchBrushStroke.h>

@class NSArray;

@interface RKMutableRetouchBrushStroke : RKRetouchBrushStroke
{
    CDUnknownBlockType _updateSourcePointBlock;
    CDUnknownBlockType _updateDetectedEdgesBlock;
    CDUnknownBlockType _errorHandlingBlock;
}

- (void)errorOccurredProcessingStroke;
@property(retain, nonatomic) NSArray *detectedEdges; // @dynamic detectedEdges;
@property(nonatomic) BOOL hasSource; // @dynamic hasSource;
- (void)setErrorHandlingBlock:(CDUnknownBlockType)arg1;
- (void)setUpdateDetectedEdgesBlock:(CDUnknownBlockType)arg1;
- (void)setUpdateSourcePointBlock:(CDUnknownBlockType)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (void)offsetPoints:(struct CGPoint)arg1;
- (void)appendPoint:(CDStruct_cd524421)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) BOOL closed; // @dynamic closed;
@property(nonatomic) BOOL edgeDetectionPerformed; // @dynamic edgeDetectionPerformed;
@property(nonatomic) float opacity; // @dynamic opacity;
@property(nonatomic) struct CGPoint sourceOffset; // @dynamic sourceOffset;

@end
