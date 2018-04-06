//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSNumber, NSObject<NSSecureCoding>, NSString, NSTouchBarItemOverlayOptions;

@protocol NSRemoteViewMarshal
- (void)hideTouchBarPopover:(NSString *)arg1;
- (void)showTouchBarPopover:(NSDictionary *)arg1 fromItem:(NSString *)arg2 withOverlayIdentifier:(NSString *)arg3 withCloseButton:(BOOL)arg4 withControlStrip:(BOOL)arg5 withOptions:(NSTouchBarItemOverlayOptions *)arg6;
- (void)serviceHasTouchBars:(NSArray *)arg1;
- (void)setTouchBar:(NSString *)arg1 description:(NSDictionary *)arg2;
- (void)setTouchBar:(NSString *)arg1 principalItemIdentifier:(NSString *)arg2;
- (void)setTouchBar:(NSString *)arg1 escapeKeyReplacementItem:(NSDictionary *)arg2;
- (void)setTouchBarItem:(NSString *)arg1 itemPosition:(NSNumber *)arg2;
- (void)serviceHasService:(int)arg1;
- (void)associateMouseAndMouseCursorPosition:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)setServiceWindowEventMask:(unsigned long long)arg1;
- (void)remoteViewControllerProxy:(void (^)(id))arg1;
- (void)retreatToConfigPhase;
- (void)serviceWindowReceivedScrollWheel:(NSData *)arg1 eventOwner:(unsigned int)arg2;
- (void)serviceViewReceivedLeftMouseDown;
- (void)serviceWindowWouldActivate;
- (void)discloseAccessoryView:(BOOL)arg1 andAnimationState:(int)arg2 andDuration:(double)arg3;
- (void)updateContentMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)updateAccessibilityChildren:(NSDictionary *)arg1;
- (void)lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)setAccessoryViewFrame:(struct CGRect)arg1;
- (void)forgetAccessoryView;
- (void)setServiceContextID:(unsigned int)arg1;
- (void)setServiceWindowStyleMask:(unsigned long long)arg1;
- (void)serviceWindowDidResignKey;
- (void)serviceWindowDidBecomeKey;
- (void)serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 transaction:(NSString *)arg3 completion:(void (^)(NSError *, struct CGRect))arg4;
- (void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(void (^)(BOOL, int, BOOL, BOOL, BOOL))arg3;
- (void)setRemoteObject:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)registerBridgeKey:(NSString *)arg1 defaultObject:(NSObject<NSSecureCoding> *)arg2 owner:(unsigned char)arg3 withReply:(void (^)(NSError *))arg4;
- (void)beginSheet:(NSString *)arg1 modalForWindow:(NSString *)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(void (^)(BOOL))arg5;
- (void)endModalSession:(NSString *)arg1;
- (void)beginModalSession:(NSString *)arg1 title:(NSString *)arg2 size:(struct CGSize)arg3 withReply:(void (^)(BOOL))arg4;
- (void)orderWindow:(unsigned int)arg1 mode:(long long)arg2 relativeTo:(unsigned int)arg3 withReply:(void (^)(void))arg4;
- (void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(void (^)(BOOL))arg2;
- (void)dragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (void)addChildWindow:(NSString *)arg1 privateEventLoopKind:(int)arg2 windowBase:(unsigned char)arg3 ordered:(long long)arg4 content:(struct CGRect)arg5 reply:(void (^)(NSError *))arg6;
- (void)waitForHostKeysToRegister:(void (^)(void))arg1;
- (void)forwardActionUpResponderChain:(NSString *)arg1;
- (void)shakeWindow;
@end
