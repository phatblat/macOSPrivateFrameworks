//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLNetworkUtilities : NSObject
{
}

+ (id)udpParse:(struct __CFData *)arg1 offset:(unsigned char)arg2;
+ (id)tcpParse:(struct __CFData *)arg1 offset:(unsigned char)arg2;
+ (id)decodeIPPacket:(id)arg1;
+ (id)decodeEtherType:(unsigned short)arg1;
+ (id)stringFromTrafficClass:(unsigned int)arg1;
+ (id)interfaceNameForIndex:(id)arg1;
+ (id)sockaddrToNSDictionary:(const char *)arg1;

@end

