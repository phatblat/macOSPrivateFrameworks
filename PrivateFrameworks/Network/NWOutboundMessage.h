//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Network/NWMessage.h>

@class NSObject<OS_nw_outbound_message>;

@interface NWOutboundMessage : NWMessage
{
    NSObject<OS_nw_outbound_message> *_internalMessage;
}

@property(retain) NSObject<OS_nw_outbound_message> *internalMessage; // @synthesize internalMessage=_internalMessage;
- (void).cxx_destruct;
- (void)addAntecedent:(id)arg1;
@property(nonatomic) unsigned int relativePriority;
@property(nonatomic) unsigned long long deadlineMilliseconds;
- (void)setNumber:(unsigned long long)arg1 forDomain:(id)arg2 key:(id)arg3;
- (id)initWithContent:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;

@end

