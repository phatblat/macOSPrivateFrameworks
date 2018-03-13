//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgressReporting.h"

@class GEOActiveTileGroup, NSDictionary, NSObject<OS_dispatch_queue>;

@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property(retain, nonatomic) id <NSObject> transaction;
@property(readonly) long long estimatedWeight;
- (void)removeOldData:(GEOActiveTileGroup *)arg1;
- (void)populateTileGroup:(GEOActiveTileGroup *)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(void (^)(NSError *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;

@optional
- (NSDictionary *)stateWithHints:(struct os_state_hints_s *)arg1;
@end

