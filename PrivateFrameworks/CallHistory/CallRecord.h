//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSSet, NSString, NSUUID;

@interface CallRecord : NSManagedObject
{
}

+ (id)fetchRequest;
@property(readonly, nonatomic) BOOL supportsServiceProvider;
@property(readonly, nonatomic) BOOL supportsRemoteParticipantHandles;
@property(readonly, nonatomic) BOOL supportsOutgoingLocalParticipantUUID;
@property(readonly, nonatomic) BOOL supportsLocalParticipantUUID;
@property(readonly, nonatomic) BOOL supportsHandleType;
@property(readonly, nonatomic) BOOL supportsCallCategory;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeCallCategoryForContext:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *chRemoteParticipantHandles;
@property(readonly, nonatomic) long long chHandleType;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(copy, nonatomic) NSNumber *answered; // @dynamic answered;
@property(copy, nonatomic) NSNumber *call_category; // @dynamic call_category;
@property(copy, nonatomic) NSNumber *calltype; // @dynamic calltype;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSNumber *disconnected_cause; // @dynamic disconnected_cause;
@property(copy, nonatomic) NSNumber *duration; // @dynamic duration;
@property(copy, nonatomic) NSNumber *face_time_data; // @dynamic face_time_data;
@property(copy, nonatomic) NSNumber *handle_type; // @dynamic handle_type;
@property(copy, nonatomic) NSString *iso_country_code; // @dynamic iso_country_code;
@property(copy, nonatomic) NSUUID *localParticipantUUID; // @dynamic localParticipantUUID;
@property(retain, nonatomic) NSString *local_address; // @dynamic local_address;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSNumber *number_availability; // @dynamic number_availability;
@property(copy, nonatomic) NSNumber *originated; // @dynamic originated;
@property(copy, nonatomic) NSUUID *outgoingLocalParticipantUUID; // @dynamic outgoingLocalParticipantUUID;
@property(copy, nonatomic) NSNumber *read; // @dynamic read;
@property(retain, nonatomic) NSSet *remoteParticipantHandles; // @dynamic remoteParticipantHandles;
@property(copy, nonatomic) NSString *service_provider; // @dynamic service_provider;
@property(copy, nonatomic) NSString *unique_id; // @dynamic unique_id;

@end

