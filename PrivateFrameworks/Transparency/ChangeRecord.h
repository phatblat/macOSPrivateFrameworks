//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData;

@interface ChangeRecord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(nonatomic) unsigned long long appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSData *clientDataVrfoutput; // @dynamic clientDataVrfoutput;
@property(copy, nonatomic) NSData *deviceIdVrfoutput; // @dynamic deviceIdVrfoutput;
@property(nonatomic) unsigned long long mutationMs; // @dynamic mutationMs;
@property(nonatomic) int mutationType; // @dynamic mutationType;
@property(copy, nonatomic) NSData *uriVrfoutput; // @dynamic uriVrfoutput;

@end
