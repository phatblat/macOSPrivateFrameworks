//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL;

@interface PKAccountWebServiceStatementActionRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_statementIdentifier;
    long long _action;
}

@property(nonatomic) long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *statementIdentifier; // @synthesize statementIdentifier=_statementIdentifier;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

