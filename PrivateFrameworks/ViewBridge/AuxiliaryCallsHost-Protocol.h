//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSColor, NSData, NSString, NSXPCListenerEndpoint;

@protocol AuxiliaryCallsHost
- (void)addChildWindow:(CDStruct_e578beec)arg1 identifier:(NSString *)arg2 listenerEndpoint:(NSXPCListenerEndpoint *)arg3 reply:(void (^)(NSError *))arg4;
- (void)serviceRequestsResize:(struct CGSize)arg1 serviceWindowBackgroundColor:(NSColor *)arg2 safeFrame:(struct CGRect)arg3 animate:(BOOL)arg4 transaction:(NSString *)arg5 completion:(void (^)(NSError *, struct CGRect))arg6;
- (void)frameOfServiceWindowDidChange:(struct CGRect)arg1 safeFrame:(struct CGRect)arg2 windowBackgroundColor:(NSColor *)arg3 reply:(void (^)(NSError *))arg4;
- (void)potentialCommandEquivalentHitServiceApp:(NSData *)arg1 eventOwner:(unsigned int)arg2 reply:(void (^)(BOOL))arg3;
- (void)keyEventHitServiceAccessoryView:(NSData *)arg1 eventOwner:(unsigned int)arg2 reply:(void (^)(BOOL))arg3;
@end
