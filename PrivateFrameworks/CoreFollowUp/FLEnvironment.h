//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FLEnvironment : NSObject
{
}

+ (id)currentEnvironment;
- (id)stressBundleIdentifiers;
- (id)supportedBundleIdentifiers;
- (BOOL)stressMode;
- (void)setFollowUpExtensionSupportEnabled:(BOOL)arg1;
@property(readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;
@property(readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
- (BOOL)shouldHideAllFollowUps;
- (BOOL)isUnlocked;
- (BOOL)isInternal;

@end

