//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString;

@interface EWSGetEventsType : EWSBaseRequestType
{
    NSString *_SubscriptionId;
    NSString *_Watermark;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Watermark; // @synthesize Watermark=_Watermark;
@property(copy, nonatomic) NSString *SubscriptionId; // @synthesize SubscriptionId=_SubscriptionId;
- (void).cxx_destruct;

@end

