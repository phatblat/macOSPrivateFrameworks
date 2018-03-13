//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWiFi/CoreWiFiMAC.h>

@interface CoreWiFiClient : CoreWiFiMAC
{
    BOOL isAssociated;
    unsigned long long createTime;
    unsigned long long joinTime;
    unsigned long long leftTime;
    unsigned long long deauthReason;
    BOOL isWOWSleep;
}

@property(nonatomic) BOOL isWOWSleep; // @synthesize isWOWSleep;
@property(nonatomic) unsigned long long deauthReason; // @synthesize deauthReason;
@property(nonatomic) unsigned long long leftTime; // @synthesize leftTime;
@property(nonatomic) unsigned long long joinTime; // @synthesize joinTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime;
@property(nonatomic) BOOL isAssociated; // @synthesize isAssociated;
- (id)skeleton;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithMAC:(id)arg1 interfaceName:(id)arg2 channel:(long long)arg3 ies:(id)arg4;

@end

