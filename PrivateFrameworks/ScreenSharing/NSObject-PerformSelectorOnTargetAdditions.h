//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (PerformSelectorOnTargetAdditions)
+ (void)ardBackgroundThreadRoutine:(id)arg1;
+ (id)backgroundThread;
+ (id)backgroundThreadRunLoop;
- (void)mainThreadIntWrapper:(id)arg1;
- (void)performSelectorOnMainThread:(SEL)arg1 withInt:(int)arg2 waitUntilDone:(BOOL)arg3;
- (void)performSelectorOnARDBackgroundThread:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnARDBackgroundThread:(SEL)arg1;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3;
@end

