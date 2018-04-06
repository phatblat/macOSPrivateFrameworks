//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary;

@interface MRSendCommandMessage : MRProtocolMessage
{
    NSDate *_serializationDate;
}

@property(readonly, nonatomic) NSDate *serializationDate; // @synthesize serializationDate=_serializationDate;
@property(readonly, nonatomic) void *playerPath;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) unsigned int command;
- (unsigned long long)type;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(void *)arg3;

@end
