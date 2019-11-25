//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMarkTornDown.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TRunAfterHelper : NSObject <TMarkTornDown>
{
    unique_function_63952f55 _functor;
    _Bool _onMainThread;
    struct TNSRef<FI_TRunAfterHelper, void> _strongSelf;
    struct TSpinLock _strongSelfRunAfterLock;
    _Bool _cancelled;
}

+ (TNSWeakPtr_a131d41e)postFunctor:(unique_function_63952f55 *)arg1 delayInSec:(double)arg2 onMainThread:(_Bool)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)post;
@property(getter=isTornDown) _Bool tornDown; // @dynamic tornDown;
- (id)initWithFunctor:(unique_function_63952f55 *)arg1 onMainThread:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

