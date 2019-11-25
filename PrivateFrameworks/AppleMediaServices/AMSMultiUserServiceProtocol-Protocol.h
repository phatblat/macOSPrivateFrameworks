//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSUUID;

@protocol AMSMultiUserServiceProtocol <NSObject>
- (void)setiTunesAccount:(ACAccount *)arg1 forHomeWithIdentifier:(NSUUID *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)refreshAfterTimeInterval:(double)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)iTunesAccountForHomeWithIdentifier:(NSUUID *)arg1 completion:(void (^)(ACAccount *, NSError *))arg2;
- (void)generateInfoWithCompletion:(void (^)(NSString *, NSError *))arg1;
@end

