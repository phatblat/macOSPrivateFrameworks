//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

@interface CRKBlockOperation : CATOperation
{
    CDUnknownBlockType _operationBlock;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithOperationBlock:(CDUnknownBlockType)arg1;

@end

