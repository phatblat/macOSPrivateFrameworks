//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

@interface EDOneCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    BOOL mIsRelative;
}

- (id).cxx_construct;
- (void)setRelative:(BOOL)arg1;
- (BOOL)isRelative;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)from;

@end

