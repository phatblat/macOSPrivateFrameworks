//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INIntent, NSString;

@protocol INIntentParameterOptionsProviding <NSObject>
- (void)getSupportsParameterOptionsForParameterNamed:(NSString *)arg1 intent:(INIntent *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)getParameterOptionsForParameterNamed:(NSString *)arg1 intent:(INIntent *)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
@end
