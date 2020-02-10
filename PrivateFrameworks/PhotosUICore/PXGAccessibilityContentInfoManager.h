//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXGMutableAccessibilityContentInfoManager.h"

@class NSArray, NSString;

@interface PXGAccessibilityContentInfoManager : PXObservable <PXGMutableAccessibilityContentInfoManager>
{
    NSArray *_visibleAccessibilityContentInfos;
    NSArray *_extendedAccessibilityContentInfos;
    NSArray *_extendedAccessibilityGroupContentInfos;
}

@property(readonly, nonatomic) NSArray *extendedAccessibilityGroupContentInfos; // @synthesize extendedAccessibilityGroupContentInfos=_extendedAccessibilityGroupContentInfos;
@property(readonly, nonatomic) NSArray *extendedAccessibilityContentInfos; // @synthesize extendedAccessibilityContentInfos=_extendedAccessibilityContentInfos;
@property(readonly, nonatomic) NSArray *visibleAccessibilityContentInfos; // @synthesize visibleAccessibilityContentInfos=_visibleAccessibilityContentInfos;
- (void).cxx_destruct;
- (void)setExtendedAccessibilityGroupContentInfos:(id)arg1;
- (void)setExtendedAccessibilityContentInfos:(id)arg1;
- (void)setVisibleAccessibilityContentInfos:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
