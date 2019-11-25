//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface CLSocket : NSObject
{
    NSString *_APIKey;
    long long _appID;
    NSURL *_authURL;
    NSDictionary *_channels;
}

@property(retain, nonatomic) NSDictionary *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

