//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFSessionCallbackInterface.h"
#import "NSObject.h"

@class NFFieldNotification, NSDictionary, NSString;

@protocol NFContactlessSessionCallbacks <NSObject, NFSessionCallbackInterface>
- (void)didSelectApplet:(NSString *)arg1;
- (void)didDetectFieldNotification:(NFFieldNotification *)arg1;
- (void)didDetectField:(BOOL)arg1;

@optional
- (void)didFelicaStateChange:(NSDictionary *)arg1;
@end

