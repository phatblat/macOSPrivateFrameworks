//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection;

@interface CalXPCClientInfo : NSObject
{
    NSXPCConnection *_connection;
    id <CalendarAgentClient> _clientLink;
    int _processID;
    NSString *_processName;
}

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(retain, nonatomic) id <CalendarAgentClient> clientLink; // @synthesize clientLink=_clientLink;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_isEqualToCalXPCClientInfo:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;

@end

