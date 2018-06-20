//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAssertionEvent, NSObject<OS_dispatch_queue>, NSString;

@protocol BKSAssertionClientProtocol <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
- (void)sendDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)sendUpdateEvent:(BKSAssertionEvent *)arg1;
- (BOOL)sendCreateEvent:(BKSAssertionEvent *)arg1 error:(id *)arg2;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg1;
- (void)registerClientHandler:(id <BKSAssertionClientHandler>)arg1 forAssertionIdentifier:(NSString *)arg2;
@end

