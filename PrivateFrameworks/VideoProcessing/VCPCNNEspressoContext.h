//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCPCNNEspressoContext : NSObject
{
    void *_espressoContext;
}

+ (void *)sharedEspressoContext;
+ (BOOL)supportGPU;
@property(readonly, nonatomic) void *espressoContext; // @synthesize espressoContext=_espressoContext;
- (id)initNewContext;

@end

