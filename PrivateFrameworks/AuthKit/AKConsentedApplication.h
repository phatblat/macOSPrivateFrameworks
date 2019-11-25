//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface AKConsentedApplication : NSObject <NSSecureCoding>
{
    NSArray *_scopes;
    NSString *_clientID;
    long long _state;
    NSString *_transferState;
    NSString *_primaryClientID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *primaryClientID; // @synthesize primaryClientID=_primaryClientID;
@property(retain, nonatomic) NSString *transferState; // @synthesize transferState=_transferState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;

@end

