//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFActionEnvironment : NSObject
{
}

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)arg1;
@property(readonly, nonatomic) BOOL isAppExtension;
@property(readonly, nonatomic) BOOL isWatchOS;
@property(readonly, nonatomic) BOOL isMemoryConstrained;

@end
