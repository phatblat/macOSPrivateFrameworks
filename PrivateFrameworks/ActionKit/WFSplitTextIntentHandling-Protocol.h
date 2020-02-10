//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFSplitTextIntent;

@protocol WFSplitTextIntentHandling <NSObject>
- (void)resolveCustomSeparatorForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveSeparatorForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(WFSplitTextSeparatorResolutionResult *))arg2;
- (void)resolveTextForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleSplitText:(WFSplitTextIntent *)arg1 completion:(void (^)(WFSplitTextIntentResponse *))arg2;

@optional
- (void)confirmSplitText:(WFSplitTextIntent *)arg1 completion:(void (^)(WFSplitTextIntentResponse *))arg2;
@end
