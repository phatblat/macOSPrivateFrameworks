//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PVInstructionGraphSourceNode.h>

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode
{
    int _trackID;
    int _fillMode;
    struct CGSize _clipNaturalSize;
    struct CGRect _cropRect;
}

+ (id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(struct CGSize)arg4;
+ (id)newSourceTrackNode:(int)arg1 transform:(struct CGAffineTransform)arg2 cropRect:(struct CGRect)arg3 clipNaturalSize:(struct CGSize)arg4;
@property(nonatomic) int fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) struct CGSize clipNaturalSize; // @synthesize clipNaturalSize=_clipNaturalSize;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
- (id)instructionGraphNodeDescription;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (BOOL)isPortrait;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (BOOL)isPassthru;
- (id)requiredSourceTrackIDs;

@end
