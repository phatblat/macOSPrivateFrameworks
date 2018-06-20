//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneMessage, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;

@protocol FBSSceneUpdaterDelegate <NSObject>
- (void)updater:(id <FBSSceneUpdater>)arg1 didReceiveMessage:(FBSSceneMessage *)arg2 withResponse:(void (^)(FBSSceneMessage *))arg3;
- (void)updater:(id <FBSSceneUpdater>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)updater:(id <FBSSceneUpdater>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(FBSWorkspaceSceneUpdateResponse *))arg5;
@end

