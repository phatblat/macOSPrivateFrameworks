//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSConditionLock, NSString;

@interface LDAssetQuery : NSObject
{
    NSString *_language;
    NSConditionLock *_conditionLock;
    BOOL _hasCompleted;
    BOOL _waitTimedOut;
}

- (BOOL)waitForCompletion;
- (void)runInBackground;
- (void)runInForeground;
- (void)_runInForeground:(BOOL)arg1;
@property(readonly) BOOL hasCompleted;
- (void)dealloc;
- (id)initWithLanguage:(id)arg1;

@end
