//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, PKPaymentAuthorizationItemsView;

@protocol PKPaymentAuthorizationItemsViewDataSource <NSObject>
- (NSView *)paymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1 viewAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInPaymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1;
@end

