//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSString;

@interface InsertRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(nonatomic) unsigned long long appVersion; // @dynamic appVersion;
@property(nonatomic) int application; // @dynamic application;
@property(copy, nonatomic) NSData *clientData; // @dynamic clientData;
@property(copy, nonatomic) NSData *deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *requestUuid; // @dynamic requestUuid;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) int version; // @dynamic version;

@end

