//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WFChooseFromListIntent;

@protocol WFChooseFromListIntentHandling <NSObject>
- (void)provideChosenItemsOptionsForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)resolveChosenItemsForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolvePromptForChooseFromList:(WFChooseFromListIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)handleChooseFromList:(WFChooseFromListIntent *)arg1 completion:(void (^)(WFChooseFromListIntentResponse *))arg2;

@optional
- (NSArray *)defaultChosenItemsForChooseFromList:(WFChooseFromListIntent *)arg1;
- (void)confirmChooseFromList:(WFChooseFromListIntent *)arg1 completion:(void (^)(WFChooseFromListIntentResponse *))arg2;
@end
