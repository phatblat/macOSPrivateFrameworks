//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSValue.h"

@interface JSValue (NUJSValue)
+ (id)nujs_valueWithFunction:(id)arg1 params:(id)arg2 body:(id)arg3 sourceURL:(id)arg4 inContext:(id)arg5;
- (id)nujs_toObject;
- (id)nujs_callWithArguments:(id)arg1 thisObject:(id)arg2;
- (BOOL)nujs_isString;
- (id)nujs_functionSource;
- (BOOL)nujs_isFunction;
- (id)nujs_toArray;
- (id)nujs_toDictionary;
- (id)nujs_properties;
@end

