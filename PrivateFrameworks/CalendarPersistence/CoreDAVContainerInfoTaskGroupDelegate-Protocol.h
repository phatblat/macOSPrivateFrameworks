//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroupDelegate.h"

@class CoreDAVContainerInfoTaskGroup, NSError, NSSet;

@protocol CoreDAVContainerInfoTaskGroupDelegate <CoreDAVTaskGroupDelegate>
- (void)containerInfoTask:(CoreDAVContainerInfoTaskGroup *)arg1 completedWithContainers:(NSSet *)arg2 error:(NSError *)arg3;
@end

