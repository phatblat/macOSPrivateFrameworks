//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSProgress;

@interface PLProgressFollower : NSObject
{
    NSProgress *_sourceProgress;
    CDUnknownBlockType _progressHandler;
    NSProgress *_outputProgress;
}

@property(retain) NSProgress *outputProgress; // @synthesize outputProgress=_outputProgress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithSourceProgress:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;

@end

