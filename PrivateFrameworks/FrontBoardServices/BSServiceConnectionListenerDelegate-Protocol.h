//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSServiceConnection<BSServiceConnectionHost>, BSServiceConnectionListener;

@protocol BSServiceConnectionListenerDelegate <NSObject>
- (void)listener:(BSServiceConnectionListener *)arg1 didReceiveConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg2 withContext:(id <BSXPCDecoding>)arg3;
@end
