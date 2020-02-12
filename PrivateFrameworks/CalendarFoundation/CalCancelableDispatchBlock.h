//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalCancelable.h"

@class NSObject<OS_dispatch_queue>;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable>
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (void)performAsync;
- (id)initWithBlock:(CDUnknownBlockType)arg1 inQueue:(id)arg2;

@end
