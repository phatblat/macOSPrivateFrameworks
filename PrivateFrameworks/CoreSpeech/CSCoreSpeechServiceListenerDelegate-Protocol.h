//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol CSCoreSpeechServiceListenerDelegate <NSObject>
- (oneway void)clearTriggerCount:(void (^)(void))arg1;
- (oneway void)getTriggerCount:(void (^)(unsigned long long))arg1;
- (oneway void)setDelayInterstitialSounds:(NSArray *)arg1 level:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getTestResponse:(void (^)(NSString *))arg1;
@end

