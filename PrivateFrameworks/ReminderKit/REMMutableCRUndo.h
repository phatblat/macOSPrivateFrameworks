//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface REMMutableCRUndo : NSObject
{
    NSMutableArray *_undoBlocks;
}

@property(readonly, nonatomic) NSMutableArray *undoBlocks; // @synthesize undoBlocks=_undoBlocks;
- (void).cxx_destruct;
- (id)immutableCopy;
- (void)addUndoBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

