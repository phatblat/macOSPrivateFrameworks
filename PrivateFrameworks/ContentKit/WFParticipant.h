//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFNaming.h"
#import "WFSerializableContent.h"

@class EKParticipant, NSPredicate, NSString, NSURL;

@interface WFParticipant : NSObject <WFNaming, WFSerializableContent>
{
    BOOL _currentUser;
    NSURL *_URL;
    NSString *_name;
    long long _status;
    long long _role;
    long long _type;
    NSPredicate *_contactPredicate;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) NSPredicate *contactPredicate; // @synthesize contactPredicate=_contactPredicate;
@property(readonly, nonatomic, getter=isCurrentUser) BOOL currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) EKParticipant *EKParticipant;
- (id)initWithEKParticipant:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2 status:(long long)arg3 role:(long long)arg4 type:(long long)arg5 isCurrentUser:(BOOL)arg6 contactPredicate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

