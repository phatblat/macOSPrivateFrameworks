//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSNumber, NSString;

@interface iCloudAccountResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
    long long _statusCode;
    NSData *_data;
    NSString *_protocolVersion;
    NSNumber *_maxAge;
}

@property(readonly, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(BOOL)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void)_parsePlistResponse:(id)arg1;

@end

