//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface WFSSHKeyDecoder : NSObject
{
    NSData *_data;
    unsigned long long _offset;
    unsigned long long _length;
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)decodeDataWithPrecedingLength;
- (id)decodeDataWithLength:(unsigned long long)arg1;
- (id)decodeStringWithPrecedingLength;
- (id)decodeStringWithLength:(unsigned long long)arg1;
- (unsigned int)decodeInteger;
- (void)advanceBy:(unsigned long long)arg1;
- (const char *)currentPointer;
- (id)initWithData:(id)arg1;

@end

