//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUCacheNode.h>

@interface NUVideoCacheNode : NUCacheNode
{
}

- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (id)persistentURL;
- (id)outputSettings:(out id *)arg1;
- (BOOL)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;

@end

