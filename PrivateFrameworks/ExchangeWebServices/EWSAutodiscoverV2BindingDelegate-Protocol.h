//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSAutodiscoverV2Binding, EWSAutodiscoverV2Response, NSError;

@protocol EWSAutodiscoverV2BindingDelegate <NSObject>
- (void)autodiscoverV2Binding:(EWSAutodiscoverV2Binding *)arg1 didFailWithError:(NSError *)arg2;
- (void)autodiscoverV2Binding:(EWSAutodiscoverV2Binding *)arg1 didFinishWithResponse:(EWSAutodiscoverV2Response *)arg2;
@end

