//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ROCKImpersonateable.h"

@class NSObject<OS_xpc_object>;

@protocol UHATextInputInterface <ROCKImpersonateable>
@property(readonly, nonatomic) BOOL isFullKeyboardAccessEnabled;
@property(readonly, nonatomic) id <UHARevealControllerInterface> revealController;
@property(retain, nonatomic) NSObject<OS_xpc_object> *remoteTextInputEndpoint;
@end

