//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol EMActivityRegistryInterface <NSObject>
- (void)registerActivityObserver:(id <EMActivityObserver_xpc>)arg1 completion:(void (^)(id <EFCancelable>, NSArray *, NSError *))arg2;
@end
