//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface OSAServicesClient : NSObject
{
    NSXPCConnection *_connection;
    id <OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;
- (void).cxx_destruct;
- (unsigned int)uidForUser:(id)arg1;
- (id)awdKey;
- (id)crashreporterKey;
- (id)queryKey:(struct __CFString *)arg1;
- (BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3;
- (BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
