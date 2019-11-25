//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKIPAddressProviding.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    id <CRKIPAddressProviding> mBaseProvider;
    NSObject<OS_dispatch_queue> *mQueue;
    int mNetworkChangeNotificationToken;
    NSString *_IPAddress;
}

@property(copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
- (void).cxx_destruct;
- (void)networkDidChange;
- (void)networkDidChangeDebounced;
- (void)unsubscribeFromNetworkChangeNotifications;
- (void)subscribeToNetworkChangeNotifications;
- (id)initWithIPAddressProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

