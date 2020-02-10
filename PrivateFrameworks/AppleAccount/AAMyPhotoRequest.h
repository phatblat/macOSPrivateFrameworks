//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString, SSAccount;

@interface AAMyPhotoRequest : AARequest
{
    ACAccount *_account;
    NSString *_serverCacheTag;
    SSAccount *_iTunesAccount;
}

+ (Class)responseClass;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1;

@end
