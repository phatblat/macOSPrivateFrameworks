//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol VCConnectionManagerDelegate <NSObject>
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (void)didEnableDuplication:(BOOL)arg1 activeConnection:(id <VCConnectionProtocol>)arg2;
- (void)connectionCallback:(id <VCConnectionProtocol>)arg1 isInitialConnection:(BOOL)arg2;
- (void)primaryConnectionChanged:(id <VCConnectionProtocol>)arg1 oldPrimaryConnection:(id <VCConnectionProtocol>)arg2;

@optional
- (void)optOutAllStreamsForConnection:(id <VCConnectionProtocol>)arg1;
- (void)discardConnection:(id <VCConnectionProtocol>)arg1;
@end

