//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDSiriSession;

@protocol HMDSiriSessionDelegate <NSObject>
- (void)siriSession:(HMDSiriSession *)arg1 didStopAudioWithCompletion:(void (^)(NSError *))arg2;
- (void)siriSession:(HMDSiriSession *)arg1 willStartAudioWithCompletion:(void (^)(NSError *))arg2;
@end
