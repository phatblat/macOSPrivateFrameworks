//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSFont;

__attribute__((visibility("hidden")))
@interface FI_TListBaseCellView : NSTableCellView
{
    _Bool _dimmed;
    int _mainProperty;
    _Bool _inBatchUpdate;
    struct TNSRef<FI_TListTextField, void> _titleTextField;
}

@property(nonatomic, getter=isInBatchUpdate) _Bool inBatchUpdate; // @synthesize inBatchUpdate=_inBatchUpdate;
@property(nonatomic) int mainProperty; // @synthesize mainProperty=_mainProperty;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)idealSize;
- (void)setTitleNeedsDisplay;
@property(copy, nonatomic) NSFont *titleFont; // @dynamic titleFont;
- (id)init;

@end

