//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage
{
    NSData *_dataValue;
}

@property(readonly, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5;

@end

