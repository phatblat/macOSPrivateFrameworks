//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NSCollectionLayoutAnchor : NSObject <NSCopying>
{
    BOOL _offsetIsUnitOffset;
    unsigned long long _edges;
    struct CGPoint _offset;
    struct CGPoint _anchorPoint;
}

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 unitOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
@property(nonatomic) BOOL offsetIsUnitOffset; // @synthesize offsetIsUnitOffset=_offsetIsUnitOffset;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
- (struct CGRect)_itemFrameForContainerRect:(struct CGRect)arg1 itemSize:(struct CGSize)arg2 itemLayoutAnchor:(id)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isFractionalOffset;
@property(readonly) BOOL isAbsoluteOffset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4;

@end
