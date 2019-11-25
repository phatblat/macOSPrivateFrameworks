//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, RPStreamSession, SidecarSession;

@interface SidecarStream : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    RPStreamSession *_rapportStream;
    CDUnknownBlockType _handler;
    SidecarSession *_session;
    // Error parsing type: AQ, name: _status
    // Error parsing type: AB, name: _activated
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendOPACK:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy) CDUnknownBlockType handler;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDStruct_bd2f613f nwClientID;
@property(readonly) unsigned long long flags;
@property(readonly) long long type;
@property(readonly, nonatomic) long long transport;
- (void)setStatus:(unsigned long long)arg1;
@property(readonly) unsigned long long status;
@property(readonly) SidecarSession *session;
@property(readonly) NSString *identifier;
@property(readonly) long long fileDescriptor;
@property(readonly) RPStreamSession *rapportStream;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 rapportStream:(id)arg2;

@end

