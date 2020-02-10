//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPFinderStateXPCProtocol <NSObject>
- (oneway void)setActiveCache:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
- (oneway void)disableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)enableFinderModeWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchFinderState:(void (^)(BOOL, NSError *))arg1;
- (oneway void)start;
@end
