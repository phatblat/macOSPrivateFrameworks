//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BUIOChannel.h"

@class NSObject<OS_dispatch_data>;

@protocol BUStreamWriteChannel <BUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end
