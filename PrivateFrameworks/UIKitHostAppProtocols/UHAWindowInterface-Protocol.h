//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKImpersonateable.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@protocol UHAWindowInterface <ROCKImpersonateable>
@property(copy, nonatomic) CDUnknownBlockType appearsKeyDidChangeCallback;
@property(readonly, nonatomic) BOOL appearsKey;
@property(nonatomic) BOOL wantsDarkChrome;
@property(nonatomic) struct CGSize contentMinSize;
@property(readonly, nonatomic) id <UHAToolbarInterface> toolbarInterface;
@property(readonly, nonatomic) id <UHATouchBarControllerInterface> touchBarController;
@property(copy, nonatomic) NSString *title;
- (void)presentContextualMenuForShareableItems:(NSArray *)arg1 atLocation:(struct CGPoint)arg2;
- (id <UHAAlertInterface>)newSheetAlert;
- (void)endHostModalSession;
- (void)beginHostModalSession;
- (void)getDropSessionWithID:(unsigned int)arg1 reply:(void (^)(id <UHADropSessionInterface>))arg2;
- (void)beginDragWithItems:(NSArray *)arg1 handler:(id <UHADragSessionHandlerInterface>)arg2;
- (void)setCursor:(id <UHACursorInterface>)arg1;
- (void)setLiveResizeWillStartHandler:(void (^)(void))arg1 didEndHandler:(void (^)(void))arg2;
- (void)toolbarCreatingIfNeeded:(BOOL)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(id <UHAToolbarInterface>, NSError *))arg3;
- (void)acceptKeyViewHandoff:(BOOL)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)noteFocusRingMaskChanged;
@end

