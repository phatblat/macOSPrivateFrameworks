//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse
{
    NSString *_conversationIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (void).cxx_destruct;

@end

