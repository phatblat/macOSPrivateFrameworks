//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AOSUI/iCloudAccountResponse.h>

@class NSDictionary, NSString;

@interface iCloudFMIPAuthenticateResponse : iCloudAccountResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

@property(readonly, nonatomic) NSString *fmipWipeToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

