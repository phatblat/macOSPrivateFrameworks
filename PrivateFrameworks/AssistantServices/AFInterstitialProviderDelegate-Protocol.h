//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFInterstitialProvider, NSString;

@protocol AFInterstitialProviderDelegate <NSObject>
- (void)interstitialProvider:(AFInterstitialProvider *)arg1 handlePhase:(long long)arg2 displayText:(NSString *)arg3 speakableText:(NSString *)arg4 context:(id)arg5 completion:(void (^)(void))arg6;
@end

