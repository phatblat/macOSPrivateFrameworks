//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EFFuture;

@protocol EFFutureDelegate <NSObject>
- (void)didFinishBlockingMainThreadForFuture:(EFFuture *)arg1;
- (void)didStartBlockingMainThreadForFuture:(EFFuture *)arg1;
@end
