//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TBaseCollectionViewController.h>

#import "TIconOrGalleryCollectionViewDelegateProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TIconOrGalleryCollectionViewController : FI_TBaseCollectionViewController <TIconOrGalleryCollectionViewDelegateProtocol>
{
    struct TNotificationCenterObserver _clipViewBoundsDidChangeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode *)arg1;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1 forNode:(const struct TFENode *)arg2 renameOp:(id)arg3;
- (_Bool)shrinkToFitTextViewAboutToOpenForNode:(const struct TFENode *)arg1;
- (void)renameSelectedItem;
- (const struct TFENode *)nodeBeingEdited;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)aboutToTearDown;
- (id)iconOrGalleryView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
