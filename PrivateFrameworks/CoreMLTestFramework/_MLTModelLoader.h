//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MLTModelLoader : NSObject
{
}

+ (BOOL)removeTemporaryModelForModelAtPath:(id)arg1 error:(id *)arg2;
+ (id)updateableModelAtPath:(id)arg1 computeUnit:(long long)arg2 error:(id *)arg3;
+ (id)modelAtPath:(id)arg1 computeUnit:(long long)arg2 allowFallback:(BOOL)arg3 error:(id *)arg4;
+ (id)modelAtPath:(id)arg1 computeUnit:(long long)arg2 computeDevice:(id)arg3 allowFallback:(BOOL)arg4 error:(id *)arg5;
+ (id)urlForModelAtPath:(id)arg1 error:(id *)arg2;
+ (id)temporaryCompiledURLForModelURL:(id)arg1;
+ (id)temporaryCompiledURLForModelPath:(id)arg1;
+ (unsigned long long)modelSizeAtPath:(id)arg1;

@end

