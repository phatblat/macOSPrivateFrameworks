//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCMPSImageAugmenting.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TCMPSHorizontalFlipAugmenter : NSObject <TCMPSImageAugmenting>
{
    double _skipProbability;
}

@property(nonatomic) double skipProbability; // @synthesize skipProbability=_skipProbability;
- (id)imageAugmentedFromImage:(id)arg1 generator:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

