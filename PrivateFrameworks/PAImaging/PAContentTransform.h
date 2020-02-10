//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAContentTransform : NSObject
{
    struct CGAffineTransform _transform;
    struct CGAffineTransform _inverseTransform;
    struct CGRect _extent;
    struct CGRect _viewport;
}

+ (struct CGAffineTransform)_contentTransformWithScale:(double)arg1 originPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3;
+ (id)contentTransformWithBounds:(struct CGRect)arg1 scale:(double)arg2 originPoint:(struct CGPoint)arg3 anchorPoint:(struct CGPoint)arg4 contentBounds:(struct CGRect)arg5 contentPointToAlign:(struct CGPoint)arg6;
+ (id)contentTransformWithBounds:(struct CGRect)arg1 scale:(double)arg2 origin:(struct CGPoint)arg3 anchor:(struct CGPoint)arg4 contentBounds:(struct CGRect)arg5 contentPointToAlign:(struct CGPoint)arg6;
@property(readonly, nonatomic) struct CGAffineTransform inverseTransform; // @synthesize inverseTransform=_inverseTransform;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_extent;
@property(readonly, nonatomic) struct CGRect viewBounds; // @synthesize viewBounds=_viewport;
@property(readonly, nonatomic) struct CGRect integralVisibleViewContentBounds;
@property(readonly, nonatomic) struct CGRect visibleViewContentBounds;
@property(readonly, nonatomic) struct CGRect visibleContentBounds;
@property(readonly, nonatomic) struct CGRect viewContentBounds;
@property(readonly, nonatomic) struct CGSize viewContentSize;
- (id)viewRegionToContentRegion:(id)arg1;
- (id)contentRegionToViewRegion:(id)arg1;
- (struct CGRect)contentRectFromViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectFromContentRect:(struct CGRect)arg1;
- (struct CGRect)viewRectToContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectToViewRect:(struct CGRect)arg1;
- (struct CGPoint)contentPointFromViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointToContentPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointFromContentPoint:(struct CGPoint)arg1;
- (struct CGPoint)contentPointToViewPoint:(struct CGPoint)arg1;
- (id)description;
- (id)initWithContentExtent:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2 viewport:(struct CGRect)arg3;
- (id)initWithContentBounds:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2 viewBounds:(struct CGRect)arg3;
- (id)initWithContentSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 viewBounds:(struct CGRect)arg3;

@end
