//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPFinderStateManagement <NSObject>
@property(copy, nonatomic) CDUnknownBlockType stateInfoChangedBlock;
- (void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
- (void)start;
@end

