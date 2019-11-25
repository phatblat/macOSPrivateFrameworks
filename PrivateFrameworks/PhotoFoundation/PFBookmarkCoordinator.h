//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject
{
    NSCountedSet *_managedPaths;
    NSCountedSet *_accessedPaths;
}

+ (BOOL)urlHasSandboxExtension:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3;
- (id)description;
- (void)addPowerBoxURL:(id)arg1;
- (void)stopAccessingURLs:(id)arg1;
- (void)stopAccessingURL:(id)arg1;
- (void)startAccessingURL:(id)arg1;
- (void)_decrementRefcountForURL:(id)arg1;
- (void)_incrementRefcountForURL:(id)arg1 callStart:(BOOL)arg2;
- (id)startAccesingURLForBookmarkData:(id)arg1 error:(id *)arg2;
- (id)init;

@end

