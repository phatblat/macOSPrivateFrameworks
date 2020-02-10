//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKStoreClient, NSDictionary, NSString;

@interface _CKAuthenticationRequest : NSObject
{
    BOOL _createSession;
    CKStoreClient *_storeClient;
    NSString *_username;
    NSString *_password;
    NSDictionary *_arguments;
}

+ (BOOL)_isSetupRunning;
@property(copy) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property BOOL createSession; // @synthesize createSession=_createSession;
@property(readonly) NSString *password; // @synthesize password=_password;
@property(readonly) NSString *username; // @synthesize username=_username;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)_postFollowUpForDeviceOffersWithAccount:(id)arg1;
- (id)_createBasicACAccountFromStoreAccount:(id)arg1;
- (void)runAsyncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreClient:(id)arg1 username:(id)arg2 password:(id)arg3;

@end
