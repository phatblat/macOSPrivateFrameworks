//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle;

@protocol WDApplicationProvider <NSObject>
- (void)launchApplication:(NSBundle *)arg1 forHost:(id <WDSessionHost>)arg2 completionHandler:(void (^)(int, NSError *))arg3;
@end
