//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSColor, NSError, NSObject, NSRemoteView, NSXPCInterface;

@protocol NSRemoteViewDelegate

@optional
@property(readonly) BOOL shouldRetainExportedObject;
- (void)constraintsDidChangeInFrameOfAccessoryWindowOfView:(NSRemoteView *)arg1;
- (void)accessoryWindowOfViewWillUpdateConstraintsIfNeeded:(NSRemoteView *)arg1;
- (BOOL)windowOfViewShouldResignKey:(NSRemoteView *)arg1;
- (BOOL)windowOfViewShouldBecomeKey:(NSRemoteView *)arg1;
- (BOOL)viewShouldDragOldestAncestorWindow:(NSRemoteView *)arg1;
- (BOOL)view:(NSRemoteView *)arg1 shouldResize:(struct CGSize)arg2;
- (NSColor *)view:(NSRemoteView *)arg1 willHaveServiceFontSmoothingBackgroundColor:(NSColor *)arg2;
- (void)viewDidRetreatToConfigPhase:(NSRemoteView *)arg1;
- (void)viewDidAdvanceToRunPhase:(NSRemoteView *)arg1;
- (void)viewDidAdvanceToConfigPhase:(NSRemoteView *)arg1;
- (void)viewDidInvalidate:(NSRemoteView *)arg1;
- (void)viewWillInvalidate:(NSRemoteView *)arg1;
- (void)view:(NSRemoteView *)arg1 encounteredError:(NSError *)arg2;
- (NSObject *)exportedObject;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)serviceViewControllerInterface;
@end

