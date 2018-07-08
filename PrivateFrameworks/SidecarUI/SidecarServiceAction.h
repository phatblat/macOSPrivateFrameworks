//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSServiceAction.h"

@class NSArray, NSKeyboardShortcut, NSMutableSet, NSSet, NSString, NSUUID, SidecarService;

__attribute__((visibility("hidden")))
@interface SidecarServiceAction : NSObject <_NSServiceAction>
{
    SidecarService *_sidecarService;
    NSKeyboardShortcut *_keyboardShortcut;
    NSMutableSet *_presentationModes;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performRequest:(id)arg1 withPasteboard:(id)arg2;
@property(readonly, nonatomic) BOOL isWorkflow;
@property(readonly, nonatomic) BOOL isSpellChecker;
@property(readonly, nonatomic) BOOL isRestricted;
- (void)resetToDefaultAvailability;
@property(nonatomic) BOOL isAvailableInServicesMenu;
@property(nonatomic) BOOL isAvailableInContextMenu;
- (void)_setIsAvailable:(BOOL)arg1 inPresentationMode:(id)arg2;
- (BOOL)_getIsAvailableInPresentationMode:(id)arg1;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSUUID *serviceUUID;
@property(copy, nonatomic) NSString *keyEquivalent;
- (void)resetToDefaultKeyboardShortcut;
@property(copy, nonatomic) NSKeyboardShortcut *keyboardShortcut;
@property(readonly, nonatomic) NSKeyboardShortcut *defaultKeyboardShortcut;
- (void)validateWithResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)invokeWithPasteboard:(id)arg1;
- (BOOL)invokeWithResponder:(id)arg1;
@property(readonly, nonatomic) NSArray *returnTypes;
@property(readonly, nonatomic) NSArray *sendFileTypes;
@property(readonly, nonatomic) NSArray *combinedSendTypes;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
- (void)loadBackgroundColorOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL hasCustomIcon;
- (void)loadImageOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *availablePresentationModes;
@property(readonly, copy, nonatomic) NSSet *defaultPresentationModes;
@property(copy, nonatomic) NSSet *presentationModes;
@property(readonly, nonatomic) NSString *localizedServiceDescription;
@property(readonly, nonatomic) NSString *bundlePath;
@property(readonly, nonatomic) NSString *localizedCategoryTitle;
@property(readonly, nonatomic) NSString *categoryTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) SidecarService *sidecarService;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
