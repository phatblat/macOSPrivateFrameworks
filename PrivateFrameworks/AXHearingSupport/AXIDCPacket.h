//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface AXIDCPacket : NSObject
{
    unsigned long long _totalLength;
    NSMutableData *_data;
}

+ (id)packetWithHeader:(CDStruct_6d9e24e6)arg1;
+ (CDStruct_6d9e24e6)headerFromData:(id)arg1;
+ (id)packetDataWithPayload:(id)arg1;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)objectPayload;
- (id)dataPayload;
- (unsigned long long)missingLength;
- (id)appendData:(id)arg1;
- (id)initWithHeader:(CDStruct_6d9e24e6)arg1;

@end

