//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSString, SignedMutationTimestamp, VRFWitness;

@interface InsertResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(retain, nonatomic) VRFWitness *clientDataWitness; // @dynamic clientDataWitness;
@property(retain, nonatomic) VRFWitness *deviceIdWitness; // @dynamic deviceIdWitness;
@property(nonatomic) BOOL hasClientDataWitness; // @dynamic hasClientDataWitness;
@property(nonatomic) BOOL hasDeviceIdWitness; // @dynamic hasDeviceIdWitness;
@property(nonatomic) BOOL hasSmt; // @dynamic hasSmt;
@property(nonatomic) BOOL hasUriWitness; // @dynamic hasUriWitness;
@property(copy, nonatomic) NSString *serverEventInfo; // @dynamic serverEventInfo;
@property(retain, nonatomic) SignedMutationTimestamp *smt; // @dynamic smt;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) VRFWitness *uriWitness; // @dynamic uriWitness;

@end
