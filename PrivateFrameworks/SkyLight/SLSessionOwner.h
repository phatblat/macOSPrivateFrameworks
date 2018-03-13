//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SLSessionOwner : NSObject
{
    unsigned int _port;
    NSNumber *_auditSessionID;
    NSNumber *_sessionID;
}

+ (id)sessionOwnerForNewSessionWithAuditSessionID:(id)arg1;
+ (id)sessionOwnerForNewSessionWithAuditSessionID:(id)arg1 launchData:(id)arg2;
+ (id)sessionOwnerBySettingLoginwindowConnection:(unsigned int)arg1;
+ (id)sessionOwnerWithXPCSerialization:(id)arg1;
+ (id)sessionOwnerWithPort:(unsigned int)arg1 auditSessionID:(int)arg2 cgSessionID:(unsigned int)arg3;
@property(retain, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSNumber *auditSessionID; // @synthesize auditSessionID=_auditSessionID;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)createXPCSerializationAndInvalidate;
- (id)initWithXPCSerialization:(id)arg1;
- (id)initWithPort:(unsigned int)arg1 auditSessionID:(int)arg2 cgSessionID:(unsigned int)arg3;
- (void)dealloc;

@end

