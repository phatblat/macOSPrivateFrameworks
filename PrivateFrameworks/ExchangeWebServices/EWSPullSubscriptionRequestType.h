//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseSubscriptionRequestType.h>

@interface EWSPullSubscriptionRequestType : EWSBaseSubscriptionRequestType
{
    BOOL _TimeoutIsSpecified;
    long long _Timeout;
}

+ (id)definition;
@property(nonatomic) BOOL TimeoutIsSpecified; // @synthesize TimeoutIsSpecified=_TimeoutIsSpecified;
@property(nonatomic) long long Timeout; // @synthesize Timeout=_Timeout;

@end

