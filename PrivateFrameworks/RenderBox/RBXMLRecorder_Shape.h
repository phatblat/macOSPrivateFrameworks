//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RenderBox/RBShape.h>

__attribute__((visibility("hidden")))
@interface RBXMLRecorder_Shape : RBShape
{
    struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>>> _attributes;
    unsigned int _seed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setStroke:(id)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(struct CGFont *)arg4 renderingStyle:(unsigned int)arg5;
- (void)setStrokedPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2 lineWidth:(double)arg3 lineCap:(int)arg4 lineJoin:(int)arg5 miterLimit:(double)arg6 dashPhase:(double)arg7 dashPattern:(const double *)arg8 dashCount:(long long)arg9;
- (void)setPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform)arg2;
- (void)setStrokedCircleAtPoint:(struct CGPoint)arg1 radius:(double)arg2 lineWidth:(double)arg3;
- (void)setCircleAtPoint:(struct CGPoint)arg1 radius:(double)arg2;
- (void)setEllipseInRect:(struct CGRect)arg1;
- (void)setStrokedRoundedRect:(struct CGRect)arg1 cornerRadii:(CDStruct_d2b197d1)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setStrokedRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2 cornerStyle:(int)arg3 lineWidth:(double)arg4;
- (void)setRoundedRect:(struct CGRect)arg1 cornerRadii:(CDStruct_d2b197d1)arg2 cornerStyle:(int)arg3;
- (void)setRoundedRect:(struct CGRect)arg1 cornerSize:(struct CGSize)arg2 cornerStyle:(int)arg3;
- (void)setStrokedRect:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)setRect:(struct CGRect)arg1;
- (void)setEmpty;
- (void)setInfinite;
- (void)encodeTo:(struct Tree *)arg1;

@end

