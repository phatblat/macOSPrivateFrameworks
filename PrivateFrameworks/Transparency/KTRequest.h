//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface KTRequest : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSData *accountId; // @dynamic accountId;
@property(copy, nonatomic) NSString *application; // @dynamic application;
@property(retain, nonatomic) NSData *clientLoggableDatas; // @dynamic clientLoggableDatas;
@property(retain, nonatomic) NSSet *failures; // @dynamic failures;
@property(retain, nonatomic) NSData *queryRequest; // @dynamic queryRequest;
@property(retain, nonatomic) NSData *queryResponse; // @dynamic queryResponse;
@property(copy, nonatomic) NSUUID *requestId; // @dynamic requestId;
@property(nonatomic) double requestTime; // @dynamic requestTime;
@property(nonatomic) long long sequenceId; // @dynamic sequenceId;
@property(copy, nonatomic) NSString *serverHint; // @dynamic serverHint;
@property(retain, nonatomic) NSData *serverLoggableDatas; // @dynamic serverLoggableDatas;
@property(retain, nonatomic) NSSet *smts; // @dynamic smts;
@property(nonatomic) long long type; // @dynamic type;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) long long verificationResult; // @dynamic verificationResult;

@end

