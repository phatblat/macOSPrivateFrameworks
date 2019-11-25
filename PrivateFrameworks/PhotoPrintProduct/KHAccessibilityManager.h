//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KHAccessibilityManager : NSObject
{
}

+ (id)defaultManager;
- (void)_announceMessage:(id)arg1 window:(id)arg2;
- (long long)defaultPriorityLevel;
- (void)announceChooseThemeInWindow:(id)arg1;
- (void)announceProjectFormatChoosing:(long long)arg1 window:(id)arg2;
- (void)announceModifyProject:(id)arg1 window:(id)arg2;
- (void)announceCreationOfProjectWithType:(long long)arg1 window:(id)arg2;
- (void)announceCreateProjectOfType:(long long)arg1 window:(id)arg2;
- (void)announceOpenProjectBundle:(id)arg1 window:(id)arg2;
- (void)announcePhotoBinOpen:(id)arg1;
- (void)announcePhotoBinClosed:(id)arg1;
- (void)announceFilterChangedTo:(id)arg1 projectType:(long long)arg2 window:(id)arg3;
- (void)notifyAccessibilityOfLayoutChange:(id)arg1;

@end

