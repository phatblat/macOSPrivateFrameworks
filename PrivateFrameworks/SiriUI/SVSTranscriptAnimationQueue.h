//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFQueue.h"

__attribute__((visibility("hidden")))
@interface SVSTranscriptAnimationQueue : AFQueue
{
}

- (id)nextAnimationForTranscriptItem:(id)arg1;
- (id)dequeueAllAnimations;
- (id)dequeNextAnimation;
- (id)nextAnimation;
- (void)enqueueAnimations:(id)arg1;
- (void)enqueueAnimation:(id)arg1;

@end

