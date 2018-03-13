//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface iCloudUserNotification : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    NSString *_informativeText;
    NSString *_accountDSID;
    unsigned long long _displayStyle;
    NSString *_actionButtonLabel;
    NSString *_otherButtonLabel;
    NSDictionary *_activateActionDict;
    NSDictionary *_dismissActionDict;
    NSDictionary *_clearActionDict;
    NSDictionary *_launchActionDict;
    NSData *_launchActionArguments;
    NSDictionary *_userInfo;
    NSString *_uuid;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *delegateMachServiceName; // @synthesize delegateMachServiceName=_delegateMachServiceName;
@property(copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSData *launchActionArguments; // @synthesize launchActionArguments=_launchActionArguments;
@property(copy) NSDictionary *launchActionDict; // @synthesize launchActionDict=_launchActionDict;
@property(copy) NSDictionary *clearActionDict; // @synthesize clearActionDict=_clearActionDict;
@property(copy) NSDictionary *dismissActionDict; // @synthesize dismissActionDict=_dismissActionDict;
@property(copy) NSDictionary *activateActionDict; // @synthesize activateActionDict=_activateActionDict;
@property(copy) NSString *otherButtonLabel; // @synthesize otherButtonLabel=_otherButtonLabel;
@property(copy) NSString *actionButtonLabel; // @synthesize actionButtonLabel=_actionButtonLabel;
@property unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy) NSString *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(copy) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithCacheDictionaryRepresentation:(id)arg1;
- (id)cacheDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

