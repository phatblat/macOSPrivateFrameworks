//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol EFScheduler <NSObject>
- (id)performWithObject:(id)arg1;
- (id <EFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <EFCancelable>)performCancelableBlock:(void (^)(EFCancelationToken *))arg1;
- (void)performVoucherPreservingBlock:(void (^)(void))arg1;
- (void)performSyncBlock:(void (^)(void))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

