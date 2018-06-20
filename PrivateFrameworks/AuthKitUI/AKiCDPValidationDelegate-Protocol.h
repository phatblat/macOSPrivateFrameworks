//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKiCDPValidationDevice, NSArray, NSString;

@protocol AKiCDPValidationDelegate <NSObject>
@property(readonly) BOOL offerServerRecovery;
@property(readonly) BOOL offerToUseRecoveryKey;
@property(readonly) BOOL offerRemoteApproval;
@property(readonly) NSArray *devices;
- (void)userSkipped;
- (void)triggerEscapeHatch;
- (void)cancelApproveFromAnotherDevice;
- (void)approveFromAnotherDevice;
- (void)validateDevice:(AKiCDPValidationDevice *)arg1 withSecret:(NSString *)arg2 completionHandler:(void (^)(unsigned long long, NSString *, NSString *))arg3;

@optional
@property(readonly) BOOL allowCancel;
@property(readonly) BOOL approvalOnlyMode;
- (void)userCancelled;
@end

