//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSPurchase, NSDictionary, NSError, NSString;

@interface AMSPurchaseResult : NSObject
{
    NSString *_correlationID;
    NSError *_error;
    AMSPurchase *_purchase;
    NSDictionary *_responseDictionary;
}

@property(copy) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(copy) AMSPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSString *correlationID; // @synthesize correlationID=_correlationID;
- (void).cxx_destruct;

@end

