//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EWSAutodiscoverV2Response : NSObject
{
    NSString *_host;
    NSString *_authorizationURI;
    NSString *_emailAddress;
    NSString *_user;
}

@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, copy, nonatomic) NSString *authorizationURI; // @synthesize authorizationURI=_authorizationURI;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHost:(id)arg1 authorizationURI:(id)arg2;

@end

