//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BU_TRunSoonHelper : NSObject
{
    unsigned long long _owningTargetID;
    unique_function_acfb320d _functor;
    int _dispatchType;
}

+ (void)postFunctor:(unique_function_acfb320d *)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispatch;
- (void)post;
- (void)repost;
- (id)runLoopModes;
- (id)initWithFunctor:(unique_function_acfb320d *)arg1 withOwningTargetID:(unsigned long long)arg2 andDispatchType:(int)arg3;

@end

