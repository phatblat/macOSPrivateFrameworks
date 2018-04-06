//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSString;

@interface MSUURLAuthenticationDelegate : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    unsigned long long _catalogOptions;
    NSError *_authenticationError;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_data;
}

+ (BOOL)_extendedValidationCheckForServerTrust:(struct __SecTrust *)arg1 connection:(id)arg2 trustError:(id *)arg3;
+ (void)initialize;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;
@property unsigned long long catalogOptions; // @synthesize catalogOptions=_catalogOptions;
- (void).cxx_destruct;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)initWithCatalogOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
