//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUTUnsafePromise : NSObject
{
}

+ (id)all:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;
- (id)_init;

@end
