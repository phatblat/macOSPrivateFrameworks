//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRKSCNetworkInterface : NSObject
{
    struct __SCNetworkInterface *mInterfaceRef;
}

@property(readonly, nonatomic) CRKSCNetworkInterface *lastNonLayeringChildInterface;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *MACAddress;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithSCNetworkInterface:(struct __SCNetworkInterface *)arg1;
- (void)dealloc;

@end
