//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXTilingCoordinateSpace, PXTilingScrollInfo;

@interface PXTilingLayout : NSObject
{
    PXTilingScrollInfo *_scrollInfo;
    void *_coordinateSpaceIdentifier;
    id <PXTilingLayoutObserver> _observer;
    PXTilingCoordinateSpace *_coordinateSpace;
    struct CGSize _referenceSize;
    struct CGSize _visibleSize;
    struct CGPoint _visibleOrigin;
    struct NSEdgeInsets _contentInset;
}

@property(readonly, nonatomic) PXTilingCoordinateSpace *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(nonatomic) __weak id <PXTilingLayoutObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) void *coordinateSpaceIdentifier; // @synthesize coordinateSpaceIdentifier=_coordinateSpaceIdentifier;
@property(readonly, copy, nonatomic) PXTilingScrollInfo *scrollInfo; // @synthesize scrollInfo=_scrollInfo;
@property(nonatomic) struct CGPoint visibleOrigin; // @synthesize visibleOrigin=_visibleOrigin;
@property(nonatomic) struct NSEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGSize visibleSize; // @synthesize visibleSize=_visibleSize;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldFlipHorizontally;
@property(readonly, nonatomic) BOOL allowHorizontalFlip;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (BOOL)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) struct CGRect scrollBounds;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (void)prepareLayout;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (id)init;

@end
