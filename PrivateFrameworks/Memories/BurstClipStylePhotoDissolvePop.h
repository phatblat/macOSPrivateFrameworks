//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/BurstClipStylePhoto.h>

__attribute__((visibility("hidden")))
@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto
{
}

- (unsigned long long)_maximumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (double)clipLastClipRatio;
- (double)maximumRegularClipDuration;
- (double)idealRegularClipDuration;
- (double)minimumRegularClipDuration;
- (double)maximumLastClipDuration;
- (double)idealLastClipDuration;
- (double)minimumLastClipDuration;
- (id)containedClipsWithoutTransitions;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (double)maximumDuration;
- (double)idealDuration;
- (double)minimumDuration;

@end
