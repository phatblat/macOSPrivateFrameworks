//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACDDeviceListViewController, ACFMessage;

@protocol ACM2SVTrustedDevicesViewControllerDelegate <NSObject>
- (ACFMessage *)currentRequest;
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(ACDDeviceListViewController *)arg1;
- (void)trustedDevicesViewControllerNeedsRefresh:(ACDDeviceListViewController *)arg1;
@end
