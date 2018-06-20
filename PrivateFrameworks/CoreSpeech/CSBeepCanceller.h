//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface CSBeepCanceller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller>> _beepCanceller;
    struct vector<float, std::__1::allocator<float>> _beepFloatVec;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    struct vector<short, std::__1::allocator<short>> _shortBuffer;
    unsigned long long _numTotalInputSamples;
    unsigned long long _numTotalOutputSamples;
    id <CSBeepCancellerDelegate> _delegate;
}

@property(nonatomic) __weak id <CSBeepCancellerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *metrics;
- (void)reset;
- (void)willBeep;
- (void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)init;

@end

