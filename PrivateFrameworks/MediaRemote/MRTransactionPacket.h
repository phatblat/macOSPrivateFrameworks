//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSMutableData, NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying>
{
    NSMutableData *_data;
    struct _MRTransactionKeyProtobuf *_key;
    unsigned long long _writeLength;
    unsigned long long _writePosition;
    NSString *_identifier;
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
}

@property(readonly, nonatomic) unsigned long long totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property(readonly, nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long writePosition; // @synthesize writePosition=_writePosition;
@property(nonatomic) unsigned long long writeLength; // @synthesize writeLength=_writeLength;
@property(readonly, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (BOOL)isComplete;
@property(readonly, nonatomic, getter=isWriteComplete) BOOL writeComplete;
@property(readonly, nonatomic, getter=isReadComplete) BOOL readComplete;
@property(readonly, nonatomic) unsigned long long actualLength;
- (void)writeComplete;
- (id)description;
@property(readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithPackets:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(struct _MRTransactionKeyProtobuf *)arg2;

@end

