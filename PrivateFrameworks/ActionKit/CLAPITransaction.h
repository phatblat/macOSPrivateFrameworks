//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface CLAPITransaction : NSObject
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    NSHTTPURLResponse *_response;
    long long _requestType;
    NSString *_identifier;
    id _userInfo;
    id _internalContext;
}

+ (id)transaction;
@property(retain, nonatomic) id internalContext; // @synthesize internalContext=_internalContext;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)dealloc;
- (id)init;

@end
