//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKPlayer, NSString;

@interface GKServerWebViewJSAccount : NSObject
{
    GKPlayer *_player;
    NSString *_authToken;
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *alias;
@property(readonly, nonatomic) NSString *playerId;
- (id)attributeKeys;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2;

@end

