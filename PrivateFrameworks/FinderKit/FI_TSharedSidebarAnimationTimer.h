//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_TSharedSidebarAnimationTimer : NSObject
{
    struct TNSRef<NSTimer, void> _timer;
    struct vector<TNSRef<FI_TSidebarViewController, void>, std::__1::allocator<TNSRef<FI_TSidebarViewController, void>>> _controllers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)next;

@end

