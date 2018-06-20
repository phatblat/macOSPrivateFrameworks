//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTMergeableStringIDTracker.h"

@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker>
{
    vector_0ee2fe7a _selectionRanges;
    unsigned long long _selectionAffinity;
}

@property(nonatomic) unsigned long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)serialize;
- (void)saveToArchive:(struct Selection *)arg1;
- (id)initWithArchive:(const struct Selection *)arg1;
- (id)initWithData:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (vector_0ee2fe7a *)selectionRanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
