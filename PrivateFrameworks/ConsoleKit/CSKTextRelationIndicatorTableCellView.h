//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSIndexSet, NSOutlineView;

@interface CSKTextRelationIndicatorTableCellView : NSTableCellView
{
    NSOutlineView *_outlineView;
    unsigned long long _topConnection;
    unsigned long long _bottomConnection;
    unsigned long long _dot;
    unsigned long long _indentationLevel;
    NSIndexSet *_backwardIndentationLevelsWithVerticalLine;
}

@property(retain, nonatomic) NSIndexSet *backwardIndentationLevelsWithVerticalLine; // @synthesize backwardIndentationLevelsWithVerticalLine=_backwardIndentationLevelsWithVerticalLine;
@property(nonatomic) unsigned long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) unsigned long long dot; // @synthesize dot=_dot;
@property(nonatomic) unsigned long long bottomConnection; // @synthesize bottomConnection=_bottomConnection;
@property(nonatomic) unsigned long long topConnection; // @synthesize topConnection=_topConnection;
@property(nonatomic) __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)configureFromDrawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInitWithSize:(struct CGSize)arg1;

@end

