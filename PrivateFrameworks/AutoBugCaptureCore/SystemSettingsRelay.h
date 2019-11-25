//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface SystemSettingsRelay : NSObject
{
    NSArray *_wifiKnownNetworkSSIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultRelay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSArray *wifiKnownNetworkSSIDs; // @synthesize wifiKnownNetworkSSIDs=_wifiKnownNetworkSSIDs;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

