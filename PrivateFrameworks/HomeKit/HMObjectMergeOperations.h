//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject
{
    NSMutableArray *_operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;
- (void)_executeOperationsOnQueue:(id)arg1;
- (void)_addOperation:(id)arg1;
- (id)init;

@end

