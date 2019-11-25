//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDWACScannerDelegate.h"
#import "HMFLogging.h"

@class HMFMessageDispatcher, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id <HMDWACScanner> _wacScanner;
    NSMutableDictionary *_unassociatedAccessories;
    HMFMessageDispatcher *_messageDispatcher;
    BOOL _scanIsActive;
    id <HMDWACBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)logCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL scanIsActive; // @synthesize scanIsActive=_scanIsActive;
- (void).cxx_destruct;
- (void)scannerDidStop:(id)arg1;
- (void)scanner:(id)arg1 didError:(id)arg2;
- (void)scanner:(id)arg1 didUpdateDevice:(id)arg2;
- (void)scanner:(id)arg1 didRemoveDevice:(id)arg2;
- (void)scanner:(id)arg1 didAddDevice:(id)arg2;
- (void)clearBackoff;
- (void)requestBackoff;
- (void)stopBrowsingForAccessories;
- (void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg1;
- (void)startBrowsingForAccessories;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

