//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKImpersonateable.h"

@class NSString;

@protocol UHAHidManagerInterface <ROCKImpersonateable>
- (void)endKeyFocusForScene:(NSString *)arg1 contextId:(unsigned int)arg2;
- (void)beginKeyFocusForScene:(NSString *)arg1 contextId:(unsigned int)arg2;
- (void)registerServiceId:(unsigned long long)arg1 handler:(void (^)(struct __IOHIDEvent *))arg2;
@end
