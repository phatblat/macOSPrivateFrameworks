//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol ClientCallsAuxiliary
- (void)forApp:(CDStruct_6ad76789)arg1 retrievePreviewEndpoint:(void (^)(NSError *, NSXPCListenerEndpoint *))arg2;
- (void)addFreeWindow:(CDStruct_5d2c0651)arg1 identifier:(NSString *)arg2 listenerEndpoint:(NSXPCListenerEndpoint *)arg3 reply:(void (^)(NSError *, struct CGRect))arg4;
- (void)windowForContextID:(unsigned int)arg1 fromViewService:(int)arg2 reply:(void (^)(unsigned int, NSError *))arg3;
- (void)hostApp:(int)arg1 description:(void (^)(NSDictionary *))arg2;
- (void)hostAppStartingWith:(NSDictionary *)arg1 endpoint:(NSXPCListenerEndpoint *)arg2 reply:(void (^)(BOOL))arg3;
@end

