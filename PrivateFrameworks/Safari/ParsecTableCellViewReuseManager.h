//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface ParsecTableCellViewReuseManager : NSObject
{
    CDUnknownBlockType _cellViewFactory;
    NSMutableSet *_reusableCellViews;
    NSMutableSet *_allCellViews;
}

- (void).cxx_destruct;
- (id)_findAndPrepareCellViewForResultWithIdentifier:(id)arg1;
- (void)prepareForReload;
- (id)cellViewForResultWithIdentifier:(id)arg1;
- (id)initWithCellViewFactory:(CDUnknownBlockType)arg1;

@end

