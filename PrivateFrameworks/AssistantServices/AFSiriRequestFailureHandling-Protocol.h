//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFSiriRequest, NSError;

@protocol AFSiriRequestFailureHandling <NSObject>
- (void)handleFailureOfRequest:(AFSiriRequest *)arg1 error:(NSError *)arg2 atTime:(unsigned long long)arg3;
@end

