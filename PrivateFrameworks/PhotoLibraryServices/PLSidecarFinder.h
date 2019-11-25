//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface PLSidecarFinder : NSObject
{
    struct os_unfair_lock_s _lock;
    NSCache *_cachedSidecarURLsByDirectory;
}

+ (id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2;
+ (BOOL)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) NSCache *cachedSidecarURLsByDirectory; // @synthesize cachedSidecarURLsByDirectory=_cachedSidecarURLsByDirectory;
- (void).cxx_destruct;
- (void)reset;
- (id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(BOOL)arg4;
- (id)init;

@end

