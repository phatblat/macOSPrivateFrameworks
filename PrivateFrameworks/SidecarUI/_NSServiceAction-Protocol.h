//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSKeyboardShortcut, NSOperationQueue, NSPasteboard, NSResponder, NSSet, NSString, NSUUID;

@protocol _NSServiceAction <NSObject>
@property(readonly, nonatomic) BOOL isSpellChecker;
@property(nonatomic) BOOL isAvailableInServicesMenu;
@property(nonatomic) BOOL isAvailableInContextMenu;
@property(readonly, nonatomic) BOOL isRestricted;
@property(readonly, nonatomic) BOOL isWorkflow;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSUUID *serviceUUID;
@property(copy, nonatomic) NSString *keyEquivalent;
@property(copy, nonatomic) NSKeyboardShortcut *keyboardShortcut;
@property(readonly, nonatomic) NSKeyboardShortcut *defaultKeyboardShortcut;
@property(readonly, nonatomic) NSArray *returnTypes;
@property(readonly, nonatomic) NSArray *sendFileTypes;
@property(readonly, nonatomic) NSArray *combinedSendTypes;
@property(readonly, nonatomic) BOOL hasBackgroundColor;
@property(readonly, nonatomic) BOOL hasCustomIcon;
@property(readonly, copy, nonatomic) NSSet *availablePresentationModes;
@property(readonly, copy, nonatomic) NSSet *defaultPresentationModes;
@property(copy, nonatomic) NSSet *presentationModes;
@property(readonly, nonatomic) NSString *localizedServiceDescription;
@property(readonly, nonatomic) NSString *bundlePath;
@property(readonly, nonatomic) NSString *localizedCategoryTitle;
@property(readonly, nonatomic) NSString *categoryTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
- (void)resetToDefaultAvailability;
- (void)resetToDefaultKeyboardShortcut;
- (void)validateWithResponder:(NSResponder *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (BOOL)invokeWithPasteboard:(NSPasteboard *)arg1;
- (BOOL)invokeWithResponder:(NSResponder *)arg1;
- (void)loadBackgroundColorOnQueue:(NSOperationQueue *)arg1 completionHandler:(void (^)(NSColor *))arg2;
- (void)loadImageOnQueue:(NSOperationQueue *)arg1 completionHandler:(void (^)(NSImage *))arg2;
@end

