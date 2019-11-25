//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSProcessInfo, NSMutableSet, NSURL;

@interface AMSOpenURL : NSObject
{
    NSMutableSet *_attemptedTargets;
    NSURL *_URL;
    AMSProcessInfo *_clientInfo;
    id <AMSBagProtocol> _bag;
}

+ (id)_sortedTargets;
+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;
+ (BOOL)openStandardURL:(id)arg1;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSMutableSet *attemptedTargets; // @synthesize attemptedTargets=_attemptedTargets;
- (void).cxx_destruct;
- (BOOL)_shouldAttemptUsingInfo:(id)arg1;
- (BOOL)_openURL:(id)arg1 bundleInfo:(id)arg2;
- (id)_performOpen;
- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;

@end

