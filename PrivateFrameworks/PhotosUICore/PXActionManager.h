//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXActionManager : NSObject
{
    id <PXActionPerformerDelegate> _performerDelegate;
}

+ (CDUnknownBlockType)_unlockDeviceHandler;
+ (void)setEnsureUnlockedDeviceHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <PXActionPerformerDelegate> performerDelegate; // @synthesize performerDelegate=_performerDelegate;
- (void).cxx_destruct;
- (id)systemImageNameForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;

@end
