//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, RMTransportPayloadRecord;

@interface RMTransportPayloadMetaRecord : NSManagedObject
{
}

+ (id)fetchRequestForDeliveredMetaPayloadRecords;
+ (id)fetchRequestForMetaRecordsWithUUID:(id)arg1 uuidIsLocal:(BOOL)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *destination; // @dynamic destination;
@property(retain, nonatomic) RMTransportPayloadRecord *payload; // @dynamic payload;
@property(nonatomic) unsigned short retryCount; // @dynamic retryCount;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

