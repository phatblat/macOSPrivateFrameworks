//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise
{
    BOOL _executedBlock;
    CDUnknownBlockType _block;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property BOOL executedBlock; // @synthesize executedBlock=_executedBlock;
- (void).cxx_destruct;
- (BOOL)_runBlock;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

