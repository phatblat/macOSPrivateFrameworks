//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class FI_TListViewController;

__attribute__((visibility("hidden")))
@interface FI_TListRowView : NSTableRowView
{
    struct TFENode _node;
    FI_TListViewController *_listViewController;
    _Bool _dimmed;
}

@property(nonatomic) struct TFENode node; // @synthesize node=_node;
@property(nonatomic) FI_TListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openNode;
- (void)didAddSubview:(id)arg1;
- (BOOL)isOpaque;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

