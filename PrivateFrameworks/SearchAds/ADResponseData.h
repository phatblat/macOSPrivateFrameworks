//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADInstallAttributionData, ADOdmlResponse, NSDictionary, NSString;

@interface ADResponseData : NSObject
{
    NSString *_impressionID;
    NSString *_metadata;
    NSString *_lineItem;
    NSString *_algoID;
    NSString *_privacy;
    NSString *_templateType;
    NSString *_clientRequestID;
    NSDictionary *_format;
    ADInstallAttributionData *_installAttribution;
    ADOdmlResponse *_odmlResponse;
}

@property(readonly, copy, nonatomic) ADOdmlResponse *odmlResponse; // @synthesize odmlResponse=_odmlResponse;
@property(readonly, copy, nonatomic) ADInstallAttributionData *installAttribution; // @synthesize installAttribution=_installAttribution;
@property(readonly, copy, nonatomic) NSDictionary *format; // @synthesize format=_format;
@property(readonly, copy, nonatomic) NSString *clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(readonly, copy, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(readonly, copy, nonatomic) NSString *privacy; // @synthesize privacy=_privacy;
@property(readonly, copy, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property(readonly, copy, nonatomic) NSString *lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

