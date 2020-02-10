//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface PLResult : NSObject
{
    id _result;
    NSError *_error;
}

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;
@property(readonly, copy) NSError *error; // @synthesize error=_error;
@property(readonly) id result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)description;
- (id)resultWithError:(id *)arg1;
@property(readonly) BOOL isFailure;
@property(readonly) BOOL isSuccess;
- (id)initWithResult:(id)arg1 error:(id)arg2;

@end
